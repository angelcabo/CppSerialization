// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fonts.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_fonts_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_fonts_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_fonts_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_fonts_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
void AddDescriptors_fonts_2eproto();
namespace Fonts {
namespace protobuf {
class Family;
class FamilyDefaultTypeInternal;
extern FamilyDefaultTypeInternal _Family_default_instance_;
class Font;
class FontDefaultTypeInternal;
extern FontDefaultTypeInternal _Font_default_instance_;
class Library;
class LibraryDefaultTypeInternal;
extern LibraryDefaultTypeInternal _Library_default_instance_;
}  // namespace protobuf
}  // namespace Fonts
PROTOBUF_NAMESPACE_OPEN
template<> ::Fonts::protobuf::Family* Arena::CreateMaybeMessage<::Fonts::protobuf::Family>(Arena*);
template<> ::Fonts::protobuf::Font* Arena::CreateMaybeMessage<::Fonts::protobuf::Font>(Arena*);
template<> ::Fonts::protobuf::Library* Arena::CreateMaybeMessage<::Fonts::protobuf::Library>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Fonts {
namespace protobuf {

// ===================================================================

class Font :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Fonts.protobuf.Font) */ {
 public:
  Font();
  virtual ~Font();

  Font(const Font& from);
  Font(Font&& from) noexcept
    : Font() {
    *this = ::std::move(from);
  }

  inline Font& operator=(const Font& from) {
    CopyFrom(from);
    return *this;
  }
  inline Font& operator=(Font&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Font& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Font* internal_default_instance() {
    return reinterpret_cast<const Font*>(
               &_Font_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Font* other);
  friend void swap(Font& a, Font& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Font* New() const final {
    return CreateMaybeMessage<Font>(nullptr);
  }

  Font* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Font>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Font& from);
  void MergeFrom(const Font& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Font* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Fonts.protobuf.Font";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const std::string& id() const;
  void set_id(const std::string& value);
  void set_id(std::string&& value);
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  std::string* mutable_id();
  std::string* release_id();
  void set_allocated_id(std::string* id);

  // required string name = 2;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // @@protoc_insertion_point(class_scope:Fonts.protobuf.Font)
 private:
  class HasBitSetters;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  friend struct ::TableStruct_fonts_2eproto;
};
// -------------------------------------------------------------------

class Family :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Fonts.protobuf.Family) */ {
 public:
  Family();
  virtual ~Family();

  Family(const Family& from);
  Family(Family&& from) noexcept
    : Family() {
    *this = ::std::move(from);
  }

  inline Family& operator=(const Family& from) {
    CopyFrom(from);
    return *this;
  }
  inline Family& operator=(Family&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Family& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Family* internal_default_instance() {
    return reinterpret_cast<const Family*>(
               &_Family_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Family* other);
  friend void swap(Family& a, Family& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Family* New() const final {
    return CreateMaybeMessage<Family>(nullptr);
  }

  Family* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Family>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Family& from);
  void MergeFrom(const Family& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Family* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Fonts.protobuf.Family";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Fonts.protobuf.Font fonts = 3;
  int fonts_size() const;
  void clear_fonts();
  static const int kFontsFieldNumber = 3;
  ::Fonts::protobuf::Font* mutable_fonts(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Fonts::protobuf::Font >*
      mutable_fonts();
  const ::Fonts::protobuf::Font& fonts(int index) const;
  ::Fonts::protobuf::Font* add_fonts();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Fonts::protobuf::Font >&
      fonts() const;

  // required string slug = 1;
  bool has_slug() const;
  void clear_slug();
  static const int kSlugFieldNumber = 1;
  const std::string& slug() const;
  void set_slug(const std::string& value);
  void set_slug(std::string&& value);
  void set_slug(const char* value);
  void set_slug(const char* value, size_t size);
  std::string* mutable_slug();
  std::string* release_slug();
  void set_allocated_slug(std::string* slug);

  // required string name = 2;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // @@protoc_insertion_point(class_scope:Fonts.protobuf.Family)
 private:
  class HasBitSetters;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Fonts::protobuf::Font > fonts_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr slug_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  friend struct ::TableStruct_fonts_2eproto;
};
// -------------------------------------------------------------------

class Library :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Fonts.protobuf.Library) */ {
 public:
  Library();
  virtual ~Library();

  Library(const Library& from);
  Library(Library&& from) noexcept
    : Library() {
    *this = ::std::move(from);
  }

  inline Library& operator=(const Library& from) {
    CopyFrom(from);
    return *this;
  }
  inline Library& operator=(Library&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Library& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Library* internal_default_instance() {
    return reinterpret_cast<const Library*>(
               &_Library_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Library* other);
  friend void swap(Library& a, Library& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Library* New() const final {
    return CreateMaybeMessage<Library>(nullptr);
  }

  Library* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Library>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Library& from);
  void MergeFrom(const Library& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Library* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Fonts.protobuf.Library";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Fonts.protobuf.Family families = 2;
  int families_size() const;
  void clear_families();
  static const int kFamiliesFieldNumber = 2;
  ::Fonts::protobuf::Family* mutable_families(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Fonts::protobuf::Family >*
      mutable_families();
  const ::Fonts::protobuf::Family& families(int index) const;
  ::Fonts::protobuf::Family* add_families();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Fonts::protobuf::Family >&
      families() const;

  // required string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // @@protoc_insertion_point(class_scope:Fonts.protobuf.Library)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Fonts::protobuf::Family > families_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  friend struct ::TableStruct_fonts_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Font

// required string id = 1;
inline bool Font::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Font::clear_id() {
  id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Font::id() const {
  // @@protoc_insertion_point(field_get:Fonts.protobuf.Font.id)
  return id_.GetNoArena();
}
inline void Font::set_id(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Fonts.protobuf.Font.id)
}
inline void Font::set_id(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  id_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Fonts.protobuf.Font.id)
}
inline void Font::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Fonts.protobuf.Font.id)
}
inline void Font::set_id(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Fonts.protobuf.Font.id)
}
inline std::string* Font::mutable_id() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:Fonts.protobuf.Font.id)
  return id_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Font::release_id() {
  // @@protoc_insertion_point(field_release:Fonts.protobuf.Font.id)
  if (!has_id()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return id_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Font::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  id_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:Fonts.protobuf.Font.id)
}

// required string name = 2;
inline bool Font::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Font::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Font::name() const {
  // @@protoc_insertion_point(field_get:Fonts.protobuf.Font.name)
  return name_.GetNoArena();
}
inline void Font::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Fonts.protobuf.Font.name)
}
inline void Font::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Fonts.protobuf.Font.name)
}
inline void Font::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Fonts.protobuf.Font.name)
}
inline void Font::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Fonts.protobuf.Font.name)
}
inline std::string* Font::mutable_name() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:Fonts.protobuf.Font.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Font::release_name() {
  // @@protoc_insertion_point(field_release:Fonts.protobuf.Font.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Font::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Fonts.protobuf.Font.name)
}

// -------------------------------------------------------------------

// Family

// required string slug = 1;
inline bool Family::has_slug() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Family::clear_slug() {
  slug_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Family::slug() const {
  // @@protoc_insertion_point(field_get:Fonts.protobuf.Family.slug)
  return slug_.GetNoArena();
}
inline void Family::set_slug(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  slug_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Fonts.protobuf.Family.slug)
}
inline void Family::set_slug(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  slug_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Fonts.protobuf.Family.slug)
}
inline void Family::set_slug(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  slug_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Fonts.protobuf.Family.slug)
}
inline void Family::set_slug(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  slug_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Fonts.protobuf.Family.slug)
}
inline std::string* Family::mutable_slug() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:Fonts.protobuf.Family.slug)
  return slug_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Family::release_slug() {
  // @@protoc_insertion_point(field_release:Fonts.protobuf.Family.slug)
  if (!has_slug()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return slug_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Family::set_allocated_slug(std::string* slug) {
  if (slug != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  slug_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), slug);
  // @@protoc_insertion_point(field_set_allocated:Fonts.protobuf.Family.slug)
}

// required string name = 2;
inline bool Family::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Family::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Family::name() const {
  // @@protoc_insertion_point(field_get:Fonts.protobuf.Family.name)
  return name_.GetNoArena();
}
inline void Family::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Fonts.protobuf.Family.name)
}
inline void Family::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Fonts.protobuf.Family.name)
}
inline void Family::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Fonts.protobuf.Family.name)
}
inline void Family::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Fonts.protobuf.Family.name)
}
inline std::string* Family::mutable_name() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:Fonts.protobuf.Family.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Family::release_name() {
  // @@protoc_insertion_point(field_release:Fonts.protobuf.Family.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Family::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Fonts.protobuf.Family.name)
}

// repeated .Fonts.protobuf.Font fonts = 3;
inline int Family::fonts_size() const {
  return fonts_.size();
}
inline void Family::clear_fonts() {
  fonts_.Clear();
}
inline ::Fonts::protobuf::Font* Family::mutable_fonts(int index) {
  // @@protoc_insertion_point(field_mutable:Fonts.protobuf.Family.fonts)
  return fonts_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Fonts::protobuf::Font >*
Family::mutable_fonts() {
  // @@protoc_insertion_point(field_mutable_list:Fonts.protobuf.Family.fonts)
  return &fonts_;
}
inline const ::Fonts::protobuf::Font& Family::fonts(int index) const {
  // @@protoc_insertion_point(field_get:Fonts.protobuf.Family.fonts)
  return fonts_.Get(index);
}
inline ::Fonts::protobuf::Font* Family::add_fonts() {
  // @@protoc_insertion_point(field_add:Fonts.protobuf.Family.fonts)
  return fonts_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Fonts::protobuf::Font >&
Family::fonts() const {
  // @@protoc_insertion_point(field_list:Fonts.protobuf.Family.fonts)
  return fonts_;
}

// -------------------------------------------------------------------

// Library

// required string name = 1;
inline bool Library::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Library::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Library::name() const {
  // @@protoc_insertion_point(field_get:Fonts.protobuf.Library.name)
  return name_.GetNoArena();
}
inline void Library::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Fonts.protobuf.Library.name)
}
inline void Library::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Fonts.protobuf.Library.name)
}
inline void Library::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Fonts.protobuf.Library.name)
}
inline void Library::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Fonts.protobuf.Library.name)
}
inline std::string* Library::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:Fonts.protobuf.Library.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Library::release_name() {
  // @@protoc_insertion_point(field_release:Fonts.protobuf.Library.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Library::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Fonts.protobuf.Library.name)
}

// repeated .Fonts.protobuf.Family families = 2;
inline int Library::families_size() const {
  return families_.size();
}
inline void Library::clear_families() {
  families_.Clear();
}
inline ::Fonts::protobuf::Family* Library::mutable_families(int index) {
  // @@protoc_insertion_point(field_mutable:Fonts.protobuf.Library.families)
  return families_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Fonts::protobuf::Family >*
Library::mutable_families() {
  // @@protoc_insertion_point(field_mutable_list:Fonts.protobuf.Library.families)
  return &families_;
}
inline const ::Fonts::protobuf::Family& Library::families(int index) const {
  // @@protoc_insertion_point(field_get:Fonts.protobuf.Library.families)
  return families_.Get(index);
}
inline ::Fonts::protobuf::Family* Library::add_families() {
  // @@protoc_insertion_point(field_add:Fonts.protobuf.Library.families)
  return families_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Fonts::protobuf::Family >&
Library::families() const {
  // @@protoc_insertion_point(field_list:Fonts.protobuf.Library.families)
  return families_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace Fonts

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_fonts_2eproto
