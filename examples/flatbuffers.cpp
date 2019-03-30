#include "../proto/fonts.h"

#include <iostream>

int main(int argc, char** argv)
{
    FontsProto::Family family_one("family-one", "Family One");
    family_one.Fonts.emplace_back(FontsProto::Font("TkD-one-1", "Regular"));

    FontsProto::Library library("Full");
    library.Families.emplace_back(family_one);

    flatbuffers::FlatBufferBuilder builder;
    builder.Finish(library.Serialize(builder));

    // Show the serialized FlatBuffer size
    std::cout << "FlatBuffer size: " << builder.GetSize() << std::endl;

    FontsProto::Library deserialized;
    deserialized.Deserialize(*Fonts::flatbuf::GetLibrary(builder.GetBufferPointer()));

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
