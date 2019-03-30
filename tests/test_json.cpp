//
// Created by Ivan Shynkarenka on 28.02.2017
//

#include "test.h"

#include "../proto/fonts.h"

#include "serialization/json/parser.h"

using namespace CppCommon;
using namespace CppSerialization::JSON;

TEST_CASE("JSON", "[LibrarySerialization]")
{
    FontsProto::Family family_one("family-one", "Family One");
    family_one.Fonts.emplace_back(FontsProto::Font("TkD-one-1", "Regular"));

    FontsProto::Library library("Full");
    library.Families.emplace_back(family_one);

    // Serialize the account to the JSON file stream
    StringBuffer buffer;
    Serializer<StringBuffer> serializer(buffer);
    library.Serialize(serializer);

    REQUIRE(buffer.GetLength() > 0);
    REQUIRE(buffer.GetString() != nullptr);

    // Parse JSON string
    Document json = Parser::Parse(buffer.GetString());

    // Deserialize the account from the JSON file stream
    FontsProto::Library deserialized;
    deserialized.Deserialize(json);

    REQUIRE(deserialized.Name == "Full");
    REQUIRE(deserialized.Families.size() == 1);
    REQUIRE(deserialized.Families[0].Slug == "family-one");
    REQUIRE(deserialized.Families[0].Name == "Family One");
    REQUIRE(deserialized.Families[0].Fonts.size() == 1);
    REQUIRE(deserialized.Families[0].Fonts[0].Id == "TkD-one-1");
    REQUIRE(deserialized.Families[0].Fonts[0].Name == "Regular");
}
