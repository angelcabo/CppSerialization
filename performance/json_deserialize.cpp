#include "benchmark/cppbenchmark.h"

#include "../proto/fonts.h"

#include "serialization/json/parser.h"

using namespace CppSerialization::JSON;

class DeserializationFixture
{
protected:
    size_t size;
    Document json;
    FontsProto::Library deserialized;

    DeserializationFixture()
    {
        FontsProto::Family family_one("family-one", "Family One");
        family_one.Fonts.emplace_back(FontsProto::Font("TkD-one-1", "Regular"));

        FontsProto::Library library("Full");
        library.Families.emplace_back(family_one);

        StringBuffer buffer;
        Serializer<StringBuffer> serializer(buffer);
        library.Serialize(serializer);

        // Parse JSON string
        json = Parser::Parse(buffer.GetString());
        size = buffer.GetSize();
    }
};

BENCHMARK_FIXTURE(DeserializationFixture, "JSON-Deserialize")
{
    context.metrics().AddBytes(json.Size());
    context.metrics().SetCustom("Size", (unsigned)size);

    deserialized.Deserialize(json);
}

BENCHMARK_MAIN()
