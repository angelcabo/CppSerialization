//
// Created by Ivan Shynkarenka on 03.03.2017
//

#include "test.h"

#include "../proto/fonts.h"

using namespace CppCommon;
using namespace CppSerialization;

TEST_CASE("FlatBuffers", "[LibrarySerialization]")
{
    FontsProto::Family family_one("family-one", "Family One", "TkD-one-1", "Regular");
    family_one.Fonts.emplace_back(FontsProto::Font("TkD-one-1", "Regular"));

    FontsProto::Library library("Full");
    library.Families.emplace_back(family_one);

    // Serialize the account to the FlatBuffer stream
    flatbuffers::FlatBufferBuilder builder;
    builder.Finish(library.Serialize(builder));

    REQUIRE(builder.GetSize() > 0);
    REQUIRE(builder.GetBufferPointer() != nullptr);

    // Deserialize the account from the FlatBuffer stream
    FontsProto::Library deserialized;
    deserialized.Deserialize(*Fonts::flatbuf::GetLibrary(builder.GetBufferPointer()));

    REQUIRE(deserialized.Name == "Full");
    REQUIRE(deserialized.Families.size() == 1);
    REQUIRE(deserialized.Families[0].Slug == "family-one");
    REQUIRE(deserialized.Families[0].Name == "Family One");
    REQUIRE(deserialized.Families[0].Fonts.size() == 1);
    REQUIRE(deserialized.Families[0].Fonts[0].id == "TkD-one-1");
    REQUIRE(deserialized.Families[0].Fonts[0].name == "Regular");
    REQUIRE(deserialized.Families[0].DisplayFont.id == "TkD-one-1");
    REQUIRE(deserialized.Families[0].DisplayFont.name == "Regular");
}
