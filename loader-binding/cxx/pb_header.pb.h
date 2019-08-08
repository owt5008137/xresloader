// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pb_header.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_pb_5fheader_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_pb_5fheader_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_pb_5fheader_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_pb_5fheader_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pb_5fheader_2eproto;
namespace org {
namespace xresloader {
namespace pb {
class xresloader_datablocks;
class xresloader_datablocksDefaultTypeInternal;
extern xresloader_datablocksDefaultTypeInternal _xresloader_datablocks_default_instance_;
class xresloader_header;
class xresloader_headerDefaultTypeInternal;
extern xresloader_headerDefaultTypeInternal _xresloader_header_default_instance_;
}  // namespace pb
}  // namespace xresloader
}  // namespace org
PROTOBUF_NAMESPACE_OPEN
template<> ::org::xresloader::pb::xresloader_datablocks* Arena::CreateMaybeMessage<::org::xresloader::pb::xresloader_datablocks>(Arena*);
template<> ::org::xresloader::pb::xresloader_header* Arena::CreateMaybeMessage<::org::xresloader::pb::xresloader_header>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace org {
namespace xresloader {
namespace pb {

// ===================================================================

class xresloader_header :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:org.xresloader.pb.xresloader_header) */ {
 public:
  xresloader_header();
  virtual ~xresloader_header();

  xresloader_header(const xresloader_header& from);
  xresloader_header(xresloader_header&& from) noexcept
    : xresloader_header() {
    *this = ::std::move(from);
  }

  inline xresloader_header& operator=(const xresloader_header& from) {
    CopyFrom(from);
    return *this;
  }
  inline xresloader_header& operator=(xresloader_header&& from) noexcept {
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
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const xresloader_header& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const xresloader_header* internal_default_instance() {
    return reinterpret_cast<const xresloader_header*>(
               &_xresloader_header_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(xresloader_header& a, xresloader_header& b) {
    a.Swap(&b);
  }
  inline void Swap(xresloader_header* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline xresloader_header* New() const final {
    return CreateMaybeMessage<xresloader_header>(nullptr);
  }

  xresloader_header* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<xresloader_header>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const xresloader_header& from);
  void MergeFrom(const xresloader_header& from);
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
  void InternalSwap(xresloader_header* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "org.xresloader.pb.xresloader_header";
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
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_pb_5fheader_2eproto);
    return ::descriptor_table_pb_5fheader_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXresVerFieldNumber = 1,
    kDataVerFieldNumber = 2,
    kHashCodeFieldNumber = 4,
    kDescriptionFieldNumber = 5,
    kCountFieldNumber = 3,
  };
  // optional string xres_ver = 1;
  bool has_xres_ver() const;
  void clear_xres_ver();
  const std::string& xres_ver() const;
  void set_xres_ver(const std::string& value);
  void set_xres_ver(std::string&& value);
  void set_xres_ver(const char* value);
  void set_xres_ver(const char* value, size_t size);
  std::string* mutable_xres_ver();
  std::string* release_xres_ver();
  void set_allocated_xres_ver(std::string* xres_ver);

  // optional string data_ver = 2;
  bool has_data_ver() const;
  void clear_data_ver();
  const std::string& data_ver() const;
  void set_data_ver(const std::string& value);
  void set_data_ver(std::string&& value);
  void set_data_ver(const char* value);
  void set_data_ver(const char* value, size_t size);
  std::string* mutable_data_ver();
  std::string* release_data_ver();
  void set_allocated_data_ver(std::string* data_ver);

  // required string hash_code = 4;
  bool has_hash_code() const;
  void clear_hash_code();
  const std::string& hash_code() const;
  void set_hash_code(const std::string& value);
  void set_hash_code(std::string&& value);
  void set_hash_code(const char* value);
  void set_hash_code(const char* value, size_t size);
  std::string* mutable_hash_code();
  std::string* release_hash_code();
  void set_allocated_hash_code(std::string* hash_code);

  // optional string description = 5;
  bool has_description() const;
  void clear_description();
  const std::string& description() const;
  void set_description(const std::string& value);
  void set_description(std::string&& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  std::string* mutable_description();
  std::string* release_description();
  void set_allocated_description(std::string* description);

  // required uint32 count = 3;
  bool has_count() const;
  void clear_count();
  ::PROTOBUF_NAMESPACE_ID::uint32 count() const;
  void set_count(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:org.xresloader.pb.xresloader_header)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr xres_ver_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_ver_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr hash_code_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
  ::PROTOBUF_NAMESPACE_ID::uint32 count_;
  friend struct ::TableStruct_pb_5fheader_2eproto;
};
// -------------------------------------------------------------------

class xresloader_datablocks :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:org.xresloader.pb.xresloader_datablocks) */ {
 public:
  xresloader_datablocks();
  virtual ~xresloader_datablocks();

  xresloader_datablocks(const xresloader_datablocks& from);
  xresloader_datablocks(xresloader_datablocks&& from) noexcept
    : xresloader_datablocks() {
    *this = ::std::move(from);
  }

  inline xresloader_datablocks& operator=(const xresloader_datablocks& from) {
    CopyFrom(from);
    return *this;
  }
  inline xresloader_datablocks& operator=(xresloader_datablocks&& from) noexcept {
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
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const xresloader_datablocks& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const xresloader_datablocks* internal_default_instance() {
    return reinterpret_cast<const xresloader_datablocks*>(
               &_xresloader_datablocks_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(xresloader_datablocks& a, xresloader_datablocks& b) {
    a.Swap(&b);
  }
  inline void Swap(xresloader_datablocks* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline xresloader_datablocks* New() const final {
    return CreateMaybeMessage<xresloader_datablocks>(nullptr);
  }

  xresloader_datablocks* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<xresloader_datablocks>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const xresloader_datablocks& from);
  void MergeFrom(const xresloader_datablocks& from);
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
  void InternalSwap(xresloader_datablocks* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "org.xresloader.pb.xresloader_datablocks";
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
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_pb_5fheader_2eproto);
    return ::descriptor_table_pb_5fheader_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataBlockFieldNumber = 2,
    kHeaderFieldNumber = 1,
  };
  // repeated bytes data_block = 2;
  int data_block_size() const;
  void clear_data_block();
  const std::string& data_block(int index) const;
  std::string* mutable_data_block(int index);
  void set_data_block(int index, const std::string& value);
  void set_data_block(int index, std::string&& value);
  void set_data_block(int index, const char* value);
  void set_data_block(int index, const void* value, size_t size);
  std::string* add_data_block();
  void add_data_block(const std::string& value);
  void add_data_block(std::string&& value);
  void add_data_block(const char* value);
  void add_data_block(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& data_block() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_data_block();

  // optional .org.xresloader.pb.xresloader_header header = 1;
  bool has_header() const;
  void clear_header();
  const ::org::xresloader::pb::xresloader_header& header() const;
  ::org::xresloader::pb::xresloader_header* release_header();
  ::org::xresloader::pb::xresloader_header* mutable_header();
  void set_allocated_header(::org::xresloader::pb::xresloader_header* header);

  // @@protoc_insertion_point(class_scope:org.xresloader.pb.xresloader_datablocks)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> data_block_;
  ::org::xresloader::pb::xresloader_header* header_;
  friend struct ::TableStruct_pb_5fheader_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// xresloader_header

// optional string xres_ver = 1;
inline bool xresloader_header::has_xres_ver() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void xresloader_header::clear_xres_ver() {
  xres_ver_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& xresloader_header::xres_ver() const {
  // @@protoc_insertion_point(field_get:org.xresloader.pb.xresloader_header.xres_ver)
  return xres_ver_.GetNoArena();
}
inline void xresloader_header::set_xres_ver(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  xres_ver_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:org.xresloader.pb.xresloader_header.xres_ver)
}
inline void xresloader_header::set_xres_ver(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  xres_ver_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:org.xresloader.pb.xresloader_header.xres_ver)
}
inline void xresloader_header::set_xres_ver(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  xres_ver_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:org.xresloader.pb.xresloader_header.xres_ver)
}
inline void xresloader_header::set_xres_ver(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  xres_ver_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:org.xresloader.pb.xresloader_header.xres_ver)
}
inline std::string* xresloader_header::mutable_xres_ver() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:org.xresloader.pb.xresloader_header.xres_ver)
  return xres_ver_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* xresloader_header::release_xres_ver() {
  // @@protoc_insertion_point(field_release:org.xresloader.pb.xresloader_header.xres_ver)
  if (!has_xres_ver()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return xres_ver_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void xresloader_header::set_allocated_xres_ver(std::string* xres_ver) {
  if (xres_ver != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  xres_ver_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), xres_ver);
  // @@protoc_insertion_point(field_set_allocated:org.xresloader.pb.xresloader_header.xres_ver)
}

// optional string data_ver = 2;
inline bool xresloader_header::has_data_ver() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void xresloader_header::clear_data_ver() {
  data_ver_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& xresloader_header::data_ver() const {
  // @@protoc_insertion_point(field_get:org.xresloader.pb.xresloader_header.data_ver)
  return data_ver_.GetNoArena();
}
inline void xresloader_header::set_data_ver(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  data_ver_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:org.xresloader.pb.xresloader_header.data_ver)
}
inline void xresloader_header::set_data_ver(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  data_ver_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:org.xresloader.pb.xresloader_header.data_ver)
}
inline void xresloader_header::set_data_ver(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  data_ver_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:org.xresloader.pb.xresloader_header.data_ver)
}
inline void xresloader_header::set_data_ver(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  data_ver_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:org.xresloader.pb.xresloader_header.data_ver)
}
inline std::string* xresloader_header::mutable_data_ver() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:org.xresloader.pb.xresloader_header.data_ver)
  return data_ver_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* xresloader_header::release_data_ver() {
  // @@protoc_insertion_point(field_release:org.xresloader.pb.xresloader_header.data_ver)
  if (!has_data_ver()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return data_ver_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void xresloader_header::set_allocated_data_ver(std::string* data_ver) {
  if (data_ver != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  data_ver_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data_ver);
  // @@protoc_insertion_point(field_set_allocated:org.xresloader.pb.xresloader_header.data_ver)
}

// required uint32 count = 3;
inline bool xresloader_header::has_count() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void xresloader_header::clear_count() {
  count_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 xresloader_header::count() const {
  // @@protoc_insertion_point(field_get:org.xresloader.pb.xresloader_header.count)
  return count_;
}
inline void xresloader_header::set_count(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  count_ = value;
  // @@protoc_insertion_point(field_set:org.xresloader.pb.xresloader_header.count)
}

// required string hash_code = 4;
inline bool xresloader_header::has_hash_code() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void xresloader_header::clear_hash_code() {
  hash_code_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& xresloader_header::hash_code() const {
  // @@protoc_insertion_point(field_get:org.xresloader.pb.xresloader_header.hash_code)
  return hash_code_.GetNoArena();
}
inline void xresloader_header::set_hash_code(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  hash_code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:org.xresloader.pb.xresloader_header.hash_code)
}
inline void xresloader_header::set_hash_code(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  hash_code_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:org.xresloader.pb.xresloader_header.hash_code)
}
inline void xresloader_header::set_hash_code(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  hash_code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:org.xresloader.pb.xresloader_header.hash_code)
}
inline void xresloader_header::set_hash_code(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  hash_code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:org.xresloader.pb.xresloader_header.hash_code)
}
inline std::string* xresloader_header::mutable_hash_code() {
  _has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_mutable:org.xresloader.pb.xresloader_header.hash_code)
  return hash_code_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* xresloader_header::release_hash_code() {
  // @@protoc_insertion_point(field_release:org.xresloader.pb.xresloader_header.hash_code)
  if (!has_hash_code()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return hash_code_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void xresloader_header::set_allocated_hash_code(std::string* hash_code) {
  if (hash_code != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  hash_code_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), hash_code);
  // @@protoc_insertion_point(field_set_allocated:org.xresloader.pb.xresloader_header.hash_code)
}

// optional string description = 5;
inline bool xresloader_header::has_description() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void xresloader_header::clear_description() {
  description_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000008u;
}
inline const std::string& xresloader_header::description() const {
  // @@protoc_insertion_point(field_get:org.xresloader.pb.xresloader_header.description)
  return description_.GetNoArena();
}
inline void xresloader_header::set_description(const std::string& value) {
  _has_bits_[0] |= 0x00000008u;
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:org.xresloader.pb.xresloader_header.description)
}
inline void xresloader_header::set_description(std::string&& value) {
  _has_bits_[0] |= 0x00000008u;
  description_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:org.xresloader.pb.xresloader_header.description)
}
inline void xresloader_header::set_description(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000008u;
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:org.xresloader.pb.xresloader_header.description)
}
inline void xresloader_header::set_description(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000008u;
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:org.xresloader.pb.xresloader_header.description)
}
inline std::string* xresloader_header::mutable_description() {
  _has_bits_[0] |= 0x00000008u;
  // @@protoc_insertion_point(field_mutable:org.xresloader.pb.xresloader_header.description)
  return description_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* xresloader_header::release_description() {
  // @@protoc_insertion_point(field_release:org.xresloader.pb.xresloader_header.description)
  if (!has_description()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000008u;
  return description_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void xresloader_header::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  description_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:org.xresloader.pb.xresloader_header.description)
}

// -------------------------------------------------------------------

// xresloader_datablocks

// optional .org.xresloader.pb.xresloader_header header = 1;
inline bool xresloader_datablocks::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void xresloader_datablocks::clear_header() {
  if (header_ != nullptr) header_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::org::xresloader::pb::xresloader_header& xresloader_datablocks::header() const {
  const ::org::xresloader::pb::xresloader_header* p = header_;
  // @@protoc_insertion_point(field_get:org.xresloader.pb.xresloader_datablocks.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::org::xresloader::pb::xresloader_header*>(
      &::org::xresloader::pb::_xresloader_header_default_instance_);
}
inline ::org::xresloader::pb::xresloader_header* xresloader_datablocks::release_header() {
  // @@protoc_insertion_point(field_release:org.xresloader.pb.xresloader_datablocks.header)
  _has_bits_[0] &= ~0x00000001u;
  ::org::xresloader::pb::xresloader_header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::org::xresloader::pb::xresloader_header* xresloader_datablocks::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::org::xresloader::pb::xresloader_header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:org.xresloader.pb.xresloader_datablocks.header)
  return header_;
}
inline void xresloader_datablocks::set_allocated_header(::org::xresloader::pb::xresloader_header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete header_;
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:org.xresloader.pb.xresloader_datablocks.header)
}

// repeated bytes data_block = 2;
inline int xresloader_datablocks::data_block_size() const {
  return data_block_.size();
}
inline void xresloader_datablocks::clear_data_block() {
  data_block_.Clear();
}
inline const std::string& xresloader_datablocks::data_block(int index) const {
  // @@protoc_insertion_point(field_get:org.xresloader.pb.xresloader_datablocks.data_block)
  return data_block_.Get(index);
}
inline std::string* xresloader_datablocks::mutable_data_block(int index) {
  // @@protoc_insertion_point(field_mutable:org.xresloader.pb.xresloader_datablocks.data_block)
  return data_block_.Mutable(index);
}
inline void xresloader_datablocks::set_data_block(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:org.xresloader.pb.xresloader_datablocks.data_block)
  data_block_.Mutable(index)->assign(value);
}
inline void xresloader_datablocks::set_data_block(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:org.xresloader.pb.xresloader_datablocks.data_block)
  data_block_.Mutable(index)->assign(std::move(value));
}
inline void xresloader_datablocks::set_data_block(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  data_block_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:org.xresloader.pb.xresloader_datablocks.data_block)
}
inline void xresloader_datablocks::set_data_block(int index, const void* value, size_t size) {
  data_block_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:org.xresloader.pb.xresloader_datablocks.data_block)
}
inline std::string* xresloader_datablocks::add_data_block() {
  // @@protoc_insertion_point(field_add_mutable:org.xresloader.pb.xresloader_datablocks.data_block)
  return data_block_.Add();
}
inline void xresloader_datablocks::add_data_block(const std::string& value) {
  data_block_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:org.xresloader.pb.xresloader_datablocks.data_block)
}
inline void xresloader_datablocks::add_data_block(std::string&& value) {
  data_block_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:org.xresloader.pb.xresloader_datablocks.data_block)
}
inline void xresloader_datablocks::add_data_block(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  data_block_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:org.xresloader.pb.xresloader_datablocks.data_block)
}
inline void xresloader_datablocks::add_data_block(const void* value, size_t size) {
  data_block_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:org.xresloader.pb.xresloader_datablocks.data_block)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
xresloader_datablocks::data_block() const {
  // @@protoc_insertion_point(field_list:org.xresloader.pb.xresloader_datablocks.data_block)
  return data_block_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
xresloader_datablocks::mutable_data_block() {
  // @@protoc_insertion_point(field_mutable_list:org.xresloader.pb.xresloader_datablocks.data_block)
  return &data_block_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace xresloader
}  // namespace org

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_pb_5fheader_2eproto
