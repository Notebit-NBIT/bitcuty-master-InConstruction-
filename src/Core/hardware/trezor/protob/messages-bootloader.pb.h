// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages-bootloader.proto

#ifndef PROTOBUF_INCLUDED_messages_2dbootloader_2eproto
#define PROTOBUF_INCLUDED_messages_2dbootloader_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_messages_2dbootloader_2eproto 

namespace protobuf_messages_2dbootloader_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_messages_2dbootloader_2eproto
namespace hw {
namespace trezor {
namespace messages {
namespace bootloader {
class FirmwareErase;
class FirmwareEraseDefaultTypeInternal;
extern FirmwareEraseDefaultTypeInternal _FirmwareErase_default_instance_;
class FirmwareRequest;
class FirmwareRequestDefaultTypeInternal;
extern FirmwareRequestDefaultTypeInternal _FirmwareRequest_default_instance_;
class FirmwareUpload;
class FirmwareUploadDefaultTypeInternal;
extern FirmwareUploadDefaultTypeInternal _FirmwareUpload_default_instance_;
class SelfTest;
class SelfTestDefaultTypeInternal;
extern SelfTestDefaultTypeInternal _SelfTest_default_instance_;
}  // namespace bootloader
}  // namespace messages
}  // namespace trezor
}  // namespace hw
namespace google {
namespace protobuf {
template<> ::hw::trezor::messages::bootloader::FirmwareErase* Arena::CreateMaybeMessage<::hw::trezor::messages::bootloader::FirmwareErase>(Arena*);
template<> ::hw::trezor::messages::bootloader::FirmwareRequest* Arena::CreateMaybeMessage<::hw::trezor::messages::bootloader::FirmwareRequest>(Arena*);
template<> ::hw::trezor::messages::bootloader::FirmwareUpload* Arena::CreateMaybeMessage<::hw::trezor::messages::bootloader::FirmwareUpload>(Arena*);
template<> ::hw::trezor::messages::bootloader::SelfTest* Arena::CreateMaybeMessage<::hw::trezor::messages::bootloader::SelfTest>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace hw {
namespace trezor {
namespace messages {
namespace bootloader {

// ===================================================================

class FirmwareErase : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hw.trezor.messages.bootloader.FirmwareErase) */ {
 public:
  FirmwareErase();
  virtual ~FirmwareErase();

  FirmwareErase(const FirmwareErase& from);

  inline FirmwareErase& operator=(const FirmwareErase& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FirmwareErase(FirmwareErase&& from) noexcept
    : FirmwareErase() {
    *this = ::std::move(from);
  }

  inline FirmwareErase& operator=(FirmwareErase&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FirmwareErase& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FirmwareErase* internal_default_instance() {
    return reinterpret_cast<const FirmwareErase*>(
               &_FirmwareErase_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(FirmwareErase* other);
  friend void swap(FirmwareErase& a, FirmwareErase& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FirmwareErase* New() const final {
    return CreateMaybeMessage<FirmwareErase>(NULL);
  }

  FirmwareErase* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FirmwareErase>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const FirmwareErase& from);
  void MergeFrom(const FirmwareErase& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FirmwareErase* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 length = 1;
  bool has_length() const;
  void clear_length();
  static const int kLengthFieldNumber = 1;
  ::google::protobuf::uint32 length() const;
  void set_length(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:hw.trezor.messages.bootloader.FirmwareErase)
 private:
  void set_has_length();
  void clear_has_length();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 length_;
  friend struct ::protobuf_messages_2dbootloader_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class FirmwareRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hw.trezor.messages.bootloader.FirmwareRequest) */ {
 public:
  FirmwareRequest();
  virtual ~FirmwareRequest();

  FirmwareRequest(const FirmwareRequest& from);

  inline FirmwareRequest& operator=(const FirmwareRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FirmwareRequest(FirmwareRequest&& from) noexcept
    : FirmwareRequest() {
    *this = ::std::move(from);
  }

  inline FirmwareRequest& operator=(FirmwareRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FirmwareRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FirmwareRequest* internal_default_instance() {
    return reinterpret_cast<const FirmwareRequest*>(
               &_FirmwareRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(FirmwareRequest* other);
  friend void swap(FirmwareRequest& a, FirmwareRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FirmwareRequest* New() const final {
    return CreateMaybeMessage<FirmwareRequest>(NULL);
  }

  FirmwareRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FirmwareRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const FirmwareRequest& from);
  void MergeFrom(const FirmwareRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FirmwareRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 offset = 1;
  bool has_offset() const;
  void clear_offset();
  static const int kOffsetFieldNumber = 1;
  ::google::protobuf::uint32 offset() const;
  void set_offset(::google::protobuf::uint32 value);

  // optional uint32 length = 2;
  bool has_length() const;
  void clear_length();
  static const int kLengthFieldNumber = 2;
  ::google::protobuf::uint32 length() const;
  void set_length(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:hw.trezor.messages.bootloader.FirmwareRequest)
 private:
  void set_has_offset();
  void clear_has_offset();
  void set_has_length();
  void clear_has_length();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 offset_;
  ::google::protobuf::uint32 length_;
  friend struct ::protobuf_messages_2dbootloader_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class FirmwareUpload : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hw.trezor.messages.bootloader.FirmwareUpload) */ {
 public:
  FirmwareUpload();
  virtual ~FirmwareUpload();

  FirmwareUpload(const FirmwareUpload& from);

  inline FirmwareUpload& operator=(const FirmwareUpload& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FirmwareUpload(FirmwareUpload&& from) noexcept
    : FirmwareUpload() {
    *this = ::std::move(from);
  }

  inline FirmwareUpload& operator=(FirmwareUpload&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FirmwareUpload& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FirmwareUpload* internal_default_instance() {
    return reinterpret_cast<const FirmwareUpload*>(
               &_FirmwareUpload_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(FirmwareUpload* other);
  friend void swap(FirmwareUpload& a, FirmwareUpload& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FirmwareUpload* New() const final {
    return CreateMaybeMessage<FirmwareUpload>(NULL);
  }

  FirmwareUpload* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FirmwareUpload>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const FirmwareUpload& from);
  void MergeFrom(const FirmwareUpload& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FirmwareUpload* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bytes payload = 1;
  bool has_payload() const;
  void clear_payload();
  static const int kPayloadFieldNumber = 1;
  const ::std::string& payload() const;
  void set_payload(const ::std::string& value);
  #if LANG_CXX11
  void set_payload(::std::string&& value);
  #endif
  void set_payload(const char* value);
  void set_payload(const void* value, size_t size);
  ::std::string* mutable_payload();
  ::std::string* release_payload();
  void set_allocated_payload(::std::string* payload);

  // optional bytes hash = 2;
  bool has_hash() const;
  void clear_hash();
  static const int kHashFieldNumber = 2;
  const ::std::string& hash() const;
  void set_hash(const ::std::string& value);
  #if LANG_CXX11
  void set_hash(::std::string&& value);
  #endif
  void set_hash(const char* value);
  void set_hash(const void* value, size_t size);
  ::std::string* mutable_hash();
  ::std::string* release_hash();
  void set_allocated_hash(::std::string* hash);

  // @@protoc_insertion_point(class_scope:hw.trezor.messages.bootloader.FirmwareUpload)
 private:
  void set_has_payload();
  void clear_has_payload();
  void set_has_hash();
  void clear_has_hash();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr payload_;
  ::google::protobuf::internal::ArenaStringPtr hash_;
  friend struct ::protobuf_messages_2dbootloader_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SelfTest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hw.trezor.messages.bootloader.SelfTest) */ {
 public:
  SelfTest();
  virtual ~SelfTest();

  SelfTest(const SelfTest& from);

  inline SelfTest& operator=(const SelfTest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SelfTest(SelfTest&& from) noexcept
    : SelfTest() {
    *this = ::std::move(from);
  }

  inline SelfTest& operator=(SelfTest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SelfTest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SelfTest* internal_default_instance() {
    return reinterpret_cast<const SelfTest*>(
               &_SelfTest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(SelfTest* other);
  friend void swap(SelfTest& a, SelfTest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SelfTest* New() const final {
    return CreateMaybeMessage<SelfTest>(NULL);
  }

  SelfTest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SelfTest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SelfTest& from);
  void MergeFrom(const SelfTest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SelfTest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes payload = 1;
  bool has_payload() const;
  void clear_payload();
  static const int kPayloadFieldNumber = 1;
  const ::std::string& payload() const;
  void set_payload(const ::std::string& value);
  #if LANG_CXX11
  void set_payload(::std::string&& value);
  #endif
  void set_payload(const char* value);
  void set_payload(const void* value, size_t size);
  ::std::string* mutable_payload();
  ::std::string* release_payload();
  void set_allocated_payload(::std::string* payload);

  // @@protoc_insertion_point(class_scope:hw.trezor.messages.bootloader.SelfTest)
 private:
  void set_has_payload();
  void clear_has_payload();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr payload_;
  friend struct ::protobuf_messages_2dbootloader_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FirmwareErase

// optional uint32 length = 1;
inline bool FirmwareErase::has_length() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FirmwareErase::set_has_length() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FirmwareErase::clear_has_length() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FirmwareErase::clear_length() {
  length_ = 0u;
  clear_has_length();
}
inline ::google::protobuf::uint32 FirmwareErase::length() const {
  // @@protoc_insertion_point(field_get:hw.trezor.messages.bootloader.FirmwareErase.length)
  return length_;
}
inline void FirmwareErase::set_length(::google::protobuf::uint32 value) {
  set_has_length();
  length_ = value;
  // @@protoc_insertion_point(field_set:hw.trezor.messages.bootloader.FirmwareErase.length)
}

// -------------------------------------------------------------------

// FirmwareRequest

// optional uint32 offset = 1;
inline bool FirmwareRequest::has_offset() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FirmwareRequest::set_has_offset() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FirmwareRequest::clear_has_offset() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FirmwareRequest::clear_offset() {
  offset_ = 0u;
  clear_has_offset();
}
inline ::google::protobuf::uint32 FirmwareRequest::offset() const {
  // @@protoc_insertion_point(field_get:hw.trezor.messages.bootloader.FirmwareRequest.offset)
  return offset_;
}
inline void FirmwareRequest::set_offset(::google::protobuf::uint32 value) {
  set_has_offset();
  offset_ = value;
  // @@protoc_insertion_point(field_set:hw.trezor.messages.bootloader.FirmwareRequest.offset)
}

// optional uint32 length = 2;
inline bool FirmwareRequest::has_length() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FirmwareRequest::set_has_length() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FirmwareRequest::clear_has_length() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FirmwareRequest::clear_length() {
  length_ = 0u;
  clear_has_length();
}
inline ::google::protobuf::uint32 FirmwareRequest::length() const {
  // @@protoc_insertion_point(field_get:hw.trezor.messages.bootloader.FirmwareRequest.length)
  return length_;
}
inline void FirmwareRequest::set_length(::google::protobuf::uint32 value) {
  set_has_length();
  length_ = value;
  // @@protoc_insertion_point(field_set:hw.trezor.messages.bootloader.FirmwareRequest.length)
}

// -------------------------------------------------------------------

// FirmwareUpload

// required bytes payload = 1;
inline bool FirmwareUpload::has_payload() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FirmwareUpload::set_has_payload() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FirmwareUpload::clear_has_payload() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FirmwareUpload::clear_payload() {
  payload_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_payload();
}
inline const ::std::string& FirmwareUpload::payload() const {
  // @@protoc_insertion_point(field_get:hw.trezor.messages.bootloader.FirmwareUpload.payload)
  return payload_.GetNoArena();
}
inline void FirmwareUpload::set_payload(const ::std::string& value) {
  set_has_payload();
  payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hw.trezor.messages.bootloader.FirmwareUpload.payload)
}
#if LANG_CXX11
inline void FirmwareUpload::set_payload(::std::string&& value) {
  set_has_payload();
  payload_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hw.trezor.messages.bootloader.FirmwareUpload.payload)
}
#endif
inline void FirmwareUpload::set_payload(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_payload();
  payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hw.trezor.messages.bootloader.FirmwareUpload.payload)
}
inline void FirmwareUpload::set_payload(const void* value, size_t size) {
  set_has_payload();
  payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hw.trezor.messages.bootloader.FirmwareUpload.payload)
}
inline ::std::string* FirmwareUpload::mutable_payload() {
  set_has_payload();
  // @@protoc_insertion_point(field_mutable:hw.trezor.messages.bootloader.FirmwareUpload.payload)
  return payload_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FirmwareUpload::release_payload() {
  // @@protoc_insertion_point(field_release:hw.trezor.messages.bootloader.FirmwareUpload.payload)
  if (!has_payload()) {
    return NULL;
  }
  clear_has_payload();
  return payload_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FirmwareUpload::set_allocated_payload(::std::string* payload) {
  if (payload != NULL) {
    set_has_payload();
  } else {
    clear_has_payload();
  }
  payload_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), payload);
  // @@protoc_insertion_point(field_set_allocated:hw.trezor.messages.bootloader.FirmwareUpload.payload)
}

// optional bytes hash = 2;
inline bool FirmwareUpload::has_hash() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FirmwareUpload::set_has_hash() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FirmwareUpload::clear_has_hash() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FirmwareUpload::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_hash();
}
inline const ::std::string& FirmwareUpload::hash() const {
  // @@protoc_insertion_point(field_get:hw.trezor.messages.bootloader.FirmwareUpload.hash)
  return hash_.GetNoArena();
}
inline void FirmwareUpload::set_hash(const ::std::string& value) {
  set_has_hash();
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hw.trezor.messages.bootloader.FirmwareUpload.hash)
}
#if LANG_CXX11
inline void FirmwareUpload::set_hash(::std::string&& value) {
  set_has_hash();
  hash_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hw.trezor.messages.bootloader.FirmwareUpload.hash)
}
#endif
inline void FirmwareUpload::set_hash(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_hash();
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hw.trezor.messages.bootloader.FirmwareUpload.hash)
}
inline void FirmwareUpload::set_hash(const void* value, size_t size) {
  set_has_hash();
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hw.trezor.messages.bootloader.FirmwareUpload.hash)
}
inline ::std::string* FirmwareUpload::mutable_hash() {
  set_has_hash();
  // @@protoc_insertion_point(field_mutable:hw.trezor.messages.bootloader.FirmwareUpload.hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FirmwareUpload::release_hash() {
  // @@protoc_insertion_point(field_release:hw.trezor.messages.bootloader.FirmwareUpload.hash)
  if (!has_hash()) {
    return NULL;
  }
  clear_has_hash();
  return hash_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FirmwareUpload::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    set_has_hash();
  } else {
    clear_has_hash();
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:hw.trezor.messages.bootloader.FirmwareUpload.hash)
}

// -------------------------------------------------------------------

// SelfTest

// optional bytes payload = 1;
inline bool SelfTest::has_payload() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SelfTest::set_has_payload() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SelfTest::clear_has_payload() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SelfTest::clear_payload() {
  payload_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_payload();
}
inline const ::std::string& SelfTest::payload() const {
  // @@protoc_insertion_point(field_get:hw.trezor.messages.bootloader.SelfTest.payload)
  return payload_.GetNoArena();
}
inline void SelfTest::set_payload(const ::std::string& value) {
  set_has_payload();
  payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hw.trezor.messages.bootloader.SelfTest.payload)
}
#if LANG_CXX11
inline void SelfTest::set_payload(::std::string&& value) {
  set_has_payload();
  payload_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hw.trezor.messages.bootloader.SelfTest.payload)
}
#endif
inline void SelfTest::set_payload(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_payload();
  payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hw.trezor.messages.bootloader.SelfTest.payload)
}
inline void SelfTest::set_payload(const void* value, size_t size) {
  set_has_payload();
  payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hw.trezor.messages.bootloader.SelfTest.payload)
}
inline ::std::string* SelfTest::mutable_payload() {
  set_has_payload();
  // @@protoc_insertion_point(field_mutable:hw.trezor.messages.bootloader.SelfTest.payload)
  return payload_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SelfTest::release_payload() {
  // @@protoc_insertion_point(field_release:hw.trezor.messages.bootloader.SelfTest.payload)
  if (!has_payload()) {
    return NULL;
  }
  clear_has_payload();
  return payload_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SelfTest::set_allocated_payload(::std::string* payload) {
  if (payload != NULL) {
    set_has_payload();
  } else {
    clear_has_payload();
  }
  payload_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), payload);
  // @@protoc_insertion_point(field_set_allocated:hw.trezor.messages.bootloader.SelfTest.payload)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace bootloader
}  // namespace messages
}  // namespace trezor
}  // namespace hw

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_messages_2dbootloader_2eproto