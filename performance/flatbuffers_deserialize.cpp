#include "benchmark/cppbenchmark.h"

#include "../proto/fonts.h"

class DeserializationFixture
{
protected:
    flatbuffers::DefaultAllocator allocator;
    flatbuffers::FlatBufferBuilder builder;
    FontsProto::Library deserialized;

    DeserializationFixture() : builder(1024, &allocator)
    {
        FontsProto::Family family_one("family-one", "Family One");
        family_one.Fonts.emplace_back(FontsProto::Font("TkD-one-1", "Regular"));

        FontsProto::Library library("Full");
        library.Families.emplace_back(family_one);

        builder.Finish(library.Serialize(builder));
    }
};

BENCHMARK_FIXTURE(DeserializationFixture, "FlatBuffers-Deserialize")
{
    context.metrics().AddBytes(builder.GetSize());
    context.metrics().SetCustom("Size", builder.GetSize());

    deserialized.Deserialize(*Fonts::flatbuf::GetLibrary(builder.GetBufferPointer()));
}

BENCHMARK_MAIN()
