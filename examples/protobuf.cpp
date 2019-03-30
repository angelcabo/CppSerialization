#include "../proto/fonts.h"

#include <iostream>

int main(int argc, char** argv)
{
    FontsProto::Family family_one("family-one", "Family One");
    family_one.Fonts.emplace_back(FontsProto::Font("TkD-one-1", "Regular"));

    FontsProto::Library library("Full");
    library.Families.emplace_back(family_one);

    Fonts::protobuf::Library output;
    library.Serialize(output);
    auto buffer = output.SerializeAsString();

    // Show the serialized Protobuf size
    std::cout << "Protobuf size: " << buffer.size() << std::endl;

    Fonts::protobuf::Library input;
    input.ParseFromString(buffer);
    FontsProto::Library deserialized;
    deserialized.Deserialize(input);

    std::cout << std::endl;
    std::cout << "Library.Name = " << deserialized.Name << std::endl;
    for (const auto& family : deserialized.Families)
    {
        std::cout << "Family.Slug => Slug: " << family.Slug
            << ", Name: " << family.Name
            << std::endl;
    }

    // Delete all global objects allocated by Protobuf
    google::protobuf::ShutdownProtobufLibrary();

    return 0;
}
