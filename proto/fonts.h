/*!
    \file library.h
*/

#ifndef CPPSERIALIZATION_PROTO_TK_H
#define CPPSERIALIZATION_PROTO_TK_H

#if defined(__GNUC__)
#pragma GCC system_header
#endif

#include "flatbuffers/fonts_generated.h"
#include "protobuf/fonts.pb.h"
#include "serialization/json/serializer.h"
#include "serialization/json/deserializer.h"

#include <algorithm>
#include <string>
#include <vector>

namespace FontsProto {

struct Font
{
    std::string Id;
    std::string Name;

    Font() : Font("<\?\?\?>", "<\?\?\?>") {}
    Font(const char* id, const char* name)
    {
        Id = id;
        Name = name;
    }

    // FlatBuffers serialization

    flatbuffers::Offset<Fonts::flatbuf::Font> Serialize(flatbuffers::FlatBufferBuilder& builder) const
    {
        return Fonts::flatbuf::CreateFontDirect(builder, Id.c_str(), Name.c_str());
    }

    void Deserialize(const Fonts::flatbuf::Font& value)
    {
        Id = value.id()->str();
        Name = value.name()->str();
    }

    // Protobuf serialization

    Fonts::protobuf::Font& Serialize(Fonts::protobuf::Font& value) const
    {
        value.set_id(Id);
        value.set_name(Name);
        return value;
    }

    void Deserialize(const Fonts::protobuf::Font& value)
    {
        Id = value.id();
        Name = value.name();
    }

    // JSON serialization

    template<typename OutputStream>
    void Serialize(CppSerialization::JSON::Serializer<OutputStream>& serializer) const
    {
        serializer.StartObject();
        serializer.Pair("id", Id);
        serializer.Pair("name", Name);
        serializer.EndObject();
    }

    template<typename JSON>
    void Deserialize(const JSON& json)
    {
        using namespace CppSerialization::JSON;

        Deserializer::Find(json, "id", Id);
        Deserializer::Find(json, "name", Name);
    }
};

struct Family
{
    std::string Slug;
    std::string Name;
    std::vector<Font> Fonts;

    Family() : Family("<<\?\?\?>>", "<<\?\?\?>>") {}
    Family(const char* slug, const char* name)
    {
        Slug = slug;
        Name = name;
    }

    // FlatBuffers serialization

    flatbuffers::Offset<Fonts::flatbuf::Family> Serialize(flatbuffers::FlatBufferBuilder& builder) const
    {
        std::vector<flatbuffers::Offset<Fonts::flatbuf::Font>> fonts;
        for (const auto& font : Fonts)
            fonts.emplace_back(font.Serialize(builder));
        return Fonts::flatbuf::CreateFamilyDirect(builder, Slug.c_str(), Name.c_str(), &fonts);
    }

    void Deserialize(const Fonts::flatbuf::Family& value)
    {
        Slug = value.slug()->str();
        Name = value.name()->str();
        Fonts.clear();
        for (auto o : *value.fonts())
        {
            Font font;
            font.Deserialize(*o);
            Fonts.emplace_back(font);
        }
    }

    // Protobuf serialization

    Fonts::protobuf::Family& Serialize(Fonts::protobuf::Family& value) const
    {
        value.set_slug(Slug);
        value.set_name(Name);
        for (const auto& font : Fonts)
            font.Serialize(*value.add_fonts());
        return value;
    }

    void Deserialize(const Fonts::protobuf::Family& value)
    {
        Slug = value.slug();
        Name = value.name();
        Fonts.clear();
        for (int i = 0; i < value.fonts_size(); ++i)
        {
            Font font;
            font.Deserialize(value.fonts(i));
            Fonts.emplace_back(font);
        }
    }

    // JSON serialization

    template<typename OutputStream>
    void Serialize(CppSerialization::JSON::Serializer<OutputStream>& serializer) const
    {
        serializer.StartObject();
        serializer.Pair("slug", Slug);
        serializer.Pair("name", Name);
        serializer.Key("fonts");
        serializer.StartArray();
        for (const auto& font : Fonts)
            font.Serialize(serializer);
        serializer.EndArray();
        serializer.EndObject();
    }

    template<typename JSON>
    void Deserialize(const JSON& json)
    {
        using namespace CppSerialization::JSON;

        Deserializer::Find(json, "slug", Slug);
        Deserializer::Find(json, "name", Name);
        Fonts.clear();
        Deserializer::FindArray(json, "fonts", [this](const Value& item)
        {
            Font font;
            font.Deserialize(item);
            Fonts.emplace_back(font);
        });
    }
};

struct Library
{
    std::string Name;
    std::vector<Family> Families;

    Library() : Library("<<\?\?\?>>") {}
    Library(const char* name)
    {
        Name = name;
    }

    // FlatBuffers serialization

    flatbuffers::Offset<Fonts::flatbuf::Library> Serialize(flatbuffers::FlatBufferBuilder& builder) const
    {
        std::vector<flatbuffers::Offset<Fonts::flatbuf::Family>> families;
        for (const auto& family : Families)
            families.emplace_back(family.Serialize(builder));
        return Fonts::flatbuf::CreateLibraryDirect(builder, Name.c_str(), &families);
    }

    void Deserialize(const Fonts::flatbuf::Library& value)
    {
        Name = value.name()->str();
        Families.clear();
        for (auto o : *value.families())
        {
            Family family;
            family.Deserialize(*o);
            Families.emplace_back(family);
        }
    }

    // Protobuf serialization

    Fonts::protobuf::Library& Serialize(Fonts::protobuf::Library& value) const
    {
        value.set_name(Name);
        for (const auto& family : Families)
            family.Serialize(*value.add_families());
        return value;
    }

    void Deserialize(const Fonts::protobuf::Library& value)
    {
        Name = value.name();
        Families.clear();
        for (int i = 0; i < value.families_size(); ++i)
        {
            Family family;
            family.Deserialize(value.families(i));
            Families.emplace_back(family);
        }
    }

    // JSON serialization

    template<typename OutputStream>
    void Serialize(CppSerialization::JSON::Serializer<OutputStream>& serializer) const
    {
        serializer.StartObject();
        serializer.Pair("name", Name);
        serializer.Key("families");
        serializer.StartArray();
        for (const auto& family : Families)
            family.Serialize(serializer);
        serializer.EndArray();
        serializer.EndObject();
    }

    template<typename JSON>
    void Deserialize(const JSON& json)
    {
        using namespace CppSerialization::JSON;

        Deserializer::Find(json, "name", Name);
        Families.clear();
        Deserializer::FindArray(json, "families", [this](const Value& item)
        {
            Family family;
            family.Deserialize(item);
            Families.emplace_back(family);
        });
    }
};

}

#endif // CPPSERIALIZATION_PROTO_TK_H
