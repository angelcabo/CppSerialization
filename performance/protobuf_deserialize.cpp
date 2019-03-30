#include "benchmark/cppbenchmark.h"

#include "../proto/fonts.h"

class DeserializationFixture
{
protected:
    std::string buffer;
    FontsProto::Library deserialized;

    DeserializationFixture()
    {
        FontsProto::Family family_one("family-one", "Family One");
        family_one.Fonts.emplace_back(FontsProto::Font("TkD-one-1", "Regular"));

        FontsProto::Library library("Full");
        library.Families.emplace_back(family_one);

        Fonts::protobuf::Library output;
        library.Serialize(output);
        buffer = output.SerializeAsString();
    }

    ~DeserializationFixture()
    {
        // Delete all global objects allocated by Protobuf
        google::protobuf::ShutdownProtobufLibrary();
    }
};

BENCHMARK_FIXTURE(DeserializationFixture, "Protobuf-Deserialize")
{
    context.metrics().AddBytes(buffer.size());
    context.metrics().SetCustom("Size", (unsigned)buffer.size());

    Fonts::protobuf::Library input;
    input.ParseFromString(buffer);
    deserialized.Deserialize(input);
}

BENCHMARK_MAIN()
