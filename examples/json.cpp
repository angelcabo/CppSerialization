#include "../proto/fonts.h"

#include "serialization/json/parser.h"

#include <iostream>

int main(int argc, char** argv)
{
    FontsProto::Family family_one("family-one", "Family One");
    family_one.Fonts.emplace_back(FontsProto::Font("TkD-one-1", "Regular"));

    FontsProto::Library library("Full");
    library.Families.emplace_back(family_one);

    CppSerialization::JSON::StringBuffer buffer;
    CppSerialization::JSON::Serializer<CppSerialization::JSON::StringBuffer> serializer(buffer);
    library.Serialize(serializer);

    // Show the serialized JSON content
    std::cout << "JSON content: " << buffer.GetString() << std::endl;
    // Show the serialized JSON size
    std::cout << "JSON size: " << buffer.GetSize() << std::endl;

    // Parse JSON string
    CppSerialization::JSON::Document json = CppSerialization::JSON::Parser::Parse(buffer.GetString());

    FontsProto::Library deserialized;
    deserialized.Deserialize(json);

    std::cout << std::endl;
    std::cout << "Library.Name = " << deserialized.Name << std::endl;
    for (const auto& family : deserialized.Families)
    {
        std::cout << "Library.Family => Slug: " << family.Slug
            << ", Name: " << family.Name
            << std::endl;
    }

    return 0;
}
