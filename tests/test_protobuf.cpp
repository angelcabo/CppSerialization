//
// Created by Ivan Shynkarenka on 30.03.2017
//

#include "test.h"

#include "../proto/fonts.h"

using namespace CppCommon;
using namespace CppSerialization;

TEST_CASE("Protobuf", "[LibrarySerialization]")
{
    FontsProto::Family family_one("family-one", "Family One", "TkD-one-1", "Regular");
    family_one.Fonts.emplace_back(FontsProto::Font("TkD-one-1", "Regular"));

    FontsProto::Library library("Full");
    library.Families.emplace_back(family_one);

    Fonts::protobuf::Library output;
    library.Serialize(output);
    auto buffer = output.SerializeAsString();

    REQUIRE(!buffer.empty());

    Fonts::protobuf::Library input;
    input.ParseFromString(buffer);
    FontsProto::Library deserialized;
    deserialized.Deserialize(input);

    REQUIRE(deserialized.Name == "Full");
    REQUIRE(deserialized.Families.size() == 1);
    REQUIRE(deserialized.Families[0].Slug == "family-one");
    REQUIRE(deserialized.Families[0].Name == "Family One");
    REQUIRE(deserialized.Families[0].Fonts.size() == 1);
    REQUIRE(deserialized.Families[0].Fonts[0].id == "TkD-one-1");
    REQUIRE(deserialized.Families[0].Fonts[0].name == "Regular");
    REQUIRE(deserialized.Families[0].DisplayFont.id == "TkD-one-1");
    REQUIRE(deserialized.Families[0].DisplayFont.name == "Regular");

    // Delete all global objects allocated by Protobuf
    google::protobuf::ShutdownProtobufLibrary();
}
