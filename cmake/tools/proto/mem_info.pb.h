// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mem_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mem_5finfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mem_5finfo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mem_5finfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mem_5finfo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mem_5finfo_2eproto;
namespace rpc_monitor {
class MemInfo;
class MemInfoDefaultTypeInternal;
extern MemInfoDefaultTypeInternal _MemInfo_default_instance_;
}  // namespace rpc_monitor
PROTOBUF_NAMESPACE_OPEN
template<> ::rpc_monitor::MemInfo* Arena::CreateMaybeMessage<::rpc_monitor::MemInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace rpc_monitor {

// ===================================================================

class MemInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:rpc_monitor.MemInfo) */ {
 public:
  inline MemInfo() : MemInfo(nullptr) {}
  virtual ~MemInfo();

  MemInfo(const MemInfo& from);
  MemInfo(MemInfo&& from) noexcept
    : MemInfo() {
    *this = ::std::move(from);
  }

  inline MemInfo& operator=(const MemInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline MemInfo& operator=(MemInfo&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const MemInfo& default_instance();

  static inline const MemInfo* internal_default_instance() {
    return reinterpret_cast<const MemInfo*>(
               &_MemInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MemInfo& a, MemInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(MemInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MemInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MemInfo* New() const final {
    return CreateMaybeMessage<MemInfo>(nullptr);
  }

  MemInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MemInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MemInfo& from);
  void MergeFrom(const MemInfo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MemInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rpc_monitor.MemInfo";
  }
  protected:
  explicit MemInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_mem_5finfo_2eproto);
    return ::descriptor_table_mem_5finfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTotalFieldNumber = 1,
    kFreeFieldNumber = 2,
    kAvailFieldNumber = 3,
    kBuffersFieldNumber = 4,
    kCachedFieldNumber = 5,
    kSwapCachedFieldNumber = 6,
    kActiveFieldNumber = 7,
    kInactiveFieldNumber = 8,
    kActiveAnonFieldNumber = 9,
    kInactiveAnonFieldNumber = 10,
    kActiveFileFieldNumber = 11,
    kInactiveFileFieldNumber = 12,
    kDirtyFieldNumber = 13,
    kWritebackFieldNumber = 14,
    kAnonPagesFieldNumber = 15,
    kMappedFieldNumber = 16,
    kKReclaimableFieldNumber = 17,
    kSReclaimableFieldNumber = 18,
    kSUnreclaimFieldNumber = 19,
    kUsedPercentFieldNumber = 31,
  };
  // float total = 1;
  void clear_total();
  float total() const;
  void set_total(float value);
  private:
  float _internal_total() const;
  void _internal_set_total(float value);
  public:

  // float free = 2;
  void clear_free();
  float free() const;
  void set_free(float value);
  private:
  float _internal_free() const;
  void _internal_set_free(float value);
  public:

  // float avail = 3;
  void clear_avail();
  float avail() const;
  void set_avail(float value);
  private:
  float _internal_avail() const;
  void _internal_set_avail(float value);
  public:

  // float buffers = 4;
  void clear_buffers();
  float buffers() const;
  void set_buffers(float value);
  private:
  float _internal_buffers() const;
  void _internal_set_buffers(float value);
  public:

  // float cached = 5;
  void clear_cached();
  float cached() const;
  void set_cached(float value);
  private:
  float _internal_cached() const;
  void _internal_set_cached(float value);
  public:

  // float swap_cached = 6;
  void clear_swap_cached();
  float swap_cached() const;
  void set_swap_cached(float value);
  private:
  float _internal_swap_cached() const;
  void _internal_set_swap_cached(float value);
  public:

  // float active = 7;
  void clear_active();
  float active() const;
  void set_active(float value);
  private:
  float _internal_active() const;
  void _internal_set_active(float value);
  public:

  // float inactive = 8;
  void clear_inactive();
  float inactive() const;
  void set_inactive(float value);
  private:
  float _internal_inactive() const;
  void _internal_set_inactive(float value);
  public:

  // float active_anon = 9;
  void clear_active_anon();
  float active_anon() const;
  void set_active_anon(float value);
  private:
  float _internal_active_anon() const;
  void _internal_set_active_anon(float value);
  public:

  // float inactive_anon = 10;
  void clear_inactive_anon();
  float inactive_anon() const;
  void set_inactive_anon(float value);
  private:
  float _internal_inactive_anon() const;
  void _internal_set_inactive_anon(float value);
  public:

  // float active_file = 11;
  void clear_active_file();
  float active_file() const;
  void set_active_file(float value);
  private:
  float _internal_active_file() const;
  void _internal_set_active_file(float value);
  public:

  // float inactive_file = 12;
  void clear_inactive_file();
  float inactive_file() const;
  void set_inactive_file(float value);
  private:
  float _internal_inactive_file() const;
  void _internal_set_inactive_file(float value);
  public:

  // float dirty = 13;
  void clear_dirty();
  float dirty() const;
  void set_dirty(float value);
  private:
  float _internal_dirty() const;
  void _internal_set_dirty(float value);
  public:

  // float writeback = 14;
  void clear_writeback();
  float writeback() const;
  void set_writeback(float value);
  private:
  float _internal_writeback() const;
  void _internal_set_writeback(float value);
  public:

  // float anon_pages = 15;
  void clear_anon_pages();
  float anon_pages() const;
  void set_anon_pages(float value);
  private:
  float _internal_anon_pages() const;
  void _internal_set_anon_pages(float value);
  public:

  // float mapped = 16;
  void clear_mapped();
  float mapped() const;
  void set_mapped(float value);
  private:
  float _internal_mapped() const;
  void _internal_set_mapped(float value);
  public:

  // float kReclaimable = 17;
  void clear_kreclaimable();
  float kreclaimable() const;
  void set_kreclaimable(float value);
  private:
  float _internal_kreclaimable() const;
  void _internal_set_kreclaimable(float value);
  public:

  // float sReclaimable = 18;
  void clear_sreclaimable();
  float sreclaimable() const;
  void set_sreclaimable(float value);
  private:
  float _internal_sreclaimable() const;
  void _internal_set_sreclaimable(float value);
  public:

  // float sUnreclaim = 19;
  void clear_sunreclaim();
  float sunreclaim() const;
  void set_sunreclaim(float value);
  private:
  float _internal_sunreclaim() const;
  void _internal_set_sunreclaim(float value);
  public:

  // float used_percent = 31;
  void clear_used_percent();
  float used_percent() const;
  void set_used_percent(float value);
  private:
  float _internal_used_percent() const;
  void _internal_set_used_percent(float value);
  public:

  // @@protoc_insertion_point(class_scope:rpc_monitor.MemInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  float total_;
  float free_;
  float avail_;
  float buffers_;
  float cached_;
  float swap_cached_;
  float active_;
  float inactive_;
  float active_anon_;
  float inactive_anon_;
  float active_file_;
  float inactive_file_;
  float dirty_;
  float writeback_;
  float anon_pages_;
  float mapped_;
  float kreclaimable_;
  float sreclaimable_;
  float sunreclaim_;
  float used_percent_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_mem_5finfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MemInfo

// float total = 1;
inline void MemInfo::clear_total() {
  total_ = 0;
}
inline float MemInfo::_internal_total() const {
  return total_;
}
inline float MemInfo::total() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.total)
  return _internal_total();
}
inline void MemInfo::_internal_set_total(float value) {
  
  total_ = value;
}
inline void MemInfo::set_total(float value) {
  _internal_set_total(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.total)
}

// float free = 2;
inline void MemInfo::clear_free() {
  free_ = 0;
}
inline float MemInfo::_internal_free() const {
  return free_;
}
inline float MemInfo::free() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.free)
  return _internal_free();
}
inline void MemInfo::_internal_set_free(float value) {
  
  free_ = value;
}
inline void MemInfo::set_free(float value) {
  _internal_set_free(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.free)
}

// float avail = 3;
inline void MemInfo::clear_avail() {
  avail_ = 0;
}
inline float MemInfo::_internal_avail() const {
  return avail_;
}
inline float MemInfo::avail() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.avail)
  return _internal_avail();
}
inline void MemInfo::_internal_set_avail(float value) {
  
  avail_ = value;
}
inline void MemInfo::set_avail(float value) {
  _internal_set_avail(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.avail)
}

// float buffers = 4;
inline void MemInfo::clear_buffers() {
  buffers_ = 0;
}
inline float MemInfo::_internal_buffers() const {
  return buffers_;
}
inline float MemInfo::buffers() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.buffers)
  return _internal_buffers();
}
inline void MemInfo::_internal_set_buffers(float value) {
  
  buffers_ = value;
}
inline void MemInfo::set_buffers(float value) {
  _internal_set_buffers(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.buffers)
}

// float cached = 5;
inline void MemInfo::clear_cached() {
  cached_ = 0;
}
inline float MemInfo::_internal_cached() const {
  return cached_;
}
inline float MemInfo::cached() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.cached)
  return _internal_cached();
}
inline void MemInfo::_internal_set_cached(float value) {
  
  cached_ = value;
}
inline void MemInfo::set_cached(float value) {
  _internal_set_cached(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.cached)
}

// float swap_cached = 6;
inline void MemInfo::clear_swap_cached() {
  swap_cached_ = 0;
}
inline float MemInfo::_internal_swap_cached() const {
  return swap_cached_;
}
inline float MemInfo::swap_cached() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.swap_cached)
  return _internal_swap_cached();
}
inline void MemInfo::_internal_set_swap_cached(float value) {
  
  swap_cached_ = value;
}
inline void MemInfo::set_swap_cached(float value) {
  _internal_set_swap_cached(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.swap_cached)
}

// float active = 7;
inline void MemInfo::clear_active() {
  active_ = 0;
}
inline float MemInfo::_internal_active() const {
  return active_;
}
inline float MemInfo::active() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.active)
  return _internal_active();
}
inline void MemInfo::_internal_set_active(float value) {
  
  active_ = value;
}
inline void MemInfo::set_active(float value) {
  _internal_set_active(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.active)
}

// float inactive = 8;
inline void MemInfo::clear_inactive() {
  inactive_ = 0;
}
inline float MemInfo::_internal_inactive() const {
  return inactive_;
}
inline float MemInfo::inactive() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.inactive)
  return _internal_inactive();
}
inline void MemInfo::_internal_set_inactive(float value) {
  
  inactive_ = value;
}
inline void MemInfo::set_inactive(float value) {
  _internal_set_inactive(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.inactive)
}

// float active_anon = 9;
inline void MemInfo::clear_active_anon() {
  active_anon_ = 0;
}
inline float MemInfo::_internal_active_anon() const {
  return active_anon_;
}
inline float MemInfo::active_anon() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.active_anon)
  return _internal_active_anon();
}
inline void MemInfo::_internal_set_active_anon(float value) {
  
  active_anon_ = value;
}
inline void MemInfo::set_active_anon(float value) {
  _internal_set_active_anon(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.active_anon)
}

// float inactive_anon = 10;
inline void MemInfo::clear_inactive_anon() {
  inactive_anon_ = 0;
}
inline float MemInfo::_internal_inactive_anon() const {
  return inactive_anon_;
}
inline float MemInfo::inactive_anon() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.inactive_anon)
  return _internal_inactive_anon();
}
inline void MemInfo::_internal_set_inactive_anon(float value) {
  
  inactive_anon_ = value;
}
inline void MemInfo::set_inactive_anon(float value) {
  _internal_set_inactive_anon(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.inactive_anon)
}

// float active_file = 11;
inline void MemInfo::clear_active_file() {
  active_file_ = 0;
}
inline float MemInfo::_internal_active_file() const {
  return active_file_;
}
inline float MemInfo::active_file() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.active_file)
  return _internal_active_file();
}
inline void MemInfo::_internal_set_active_file(float value) {
  
  active_file_ = value;
}
inline void MemInfo::set_active_file(float value) {
  _internal_set_active_file(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.active_file)
}

// float inactive_file = 12;
inline void MemInfo::clear_inactive_file() {
  inactive_file_ = 0;
}
inline float MemInfo::_internal_inactive_file() const {
  return inactive_file_;
}
inline float MemInfo::inactive_file() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.inactive_file)
  return _internal_inactive_file();
}
inline void MemInfo::_internal_set_inactive_file(float value) {
  
  inactive_file_ = value;
}
inline void MemInfo::set_inactive_file(float value) {
  _internal_set_inactive_file(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.inactive_file)
}

// float dirty = 13;
inline void MemInfo::clear_dirty() {
  dirty_ = 0;
}
inline float MemInfo::_internal_dirty() const {
  return dirty_;
}
inline float MemInfo::dirty() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.dirty)
  return _internal_dirty();
}
inline void MemInfo::_internal_set_dirty(float value) {
  
  dirty_ = value;
}
inline void MemInfo::set_dirty(float value) {
  _internal_set_dirty(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.dirty)
}

// float writeback = 14;
inline void MemInfo::clear_writeback() {
  writeback_ = 0;
}
inline float MemInfo::_internal_writeback() const {
  return writeback_;
}
inline float MemInfo::writeback() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.writeback)
  return _internal_writeback();
}
inline void MemInfo::_internal_set_writeback(float value) {
  
  writeback_ = value;
}
inline void MemInfo::set_writeback(float value) {
  _internal_set_writeback(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.writeback)
}

// float anon_pages = 15;
inline void MemInfo::clear_anon_pages() {
  anon_pages_ = 0;
}
inline float MemInfo::_internal_anon_pages() const {
  return anon_pages_;
}
inline float MemInfo::anon_pages() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.anon_pages)
  return _internal_anon_pages();
}
inline void MemInfo::_internal_set_anon_pages(float value) {
  
  anon_pages_ = value;
}
inline void MemInfo::set_anon_pages(float value) {
  _internal_set_anon_pages(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.anon_pages)
}

// float mapped = 16;
inline void MemInfo::clear_mapped() {
  mapped_ = 0;
}
inline float MemInfo::_internal_mapped() const {
  return mapped_;
}
inline float MemInfo::mapped() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.mapped)
  return _internal_mapped();
}
inline void MemInfo::_internal_set_mapped(float value) {
  
  mapped_ = value;
}
inline void MemInfo::set_mapped(float value) {
  _internal_set_mapped(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.mapped)
}

// float kReclaimable = 17;
inline void MemInfo::clear_kreclaimable() {
  kreclaimable_ = 0;
}
inline float MemInfo::_internal_kreclaimable() const {
  return kreclaimable_;
}
inline float MemInfo::kreclaimable() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.kReclaimable)
  return _internal_kreclaimable();
}
inline void MemInfo::_internal_set_kreclaimable(float value) {
  
  kreclaimable_ = value;
}
inline void MemInfo::set_kreclaimable(float value) {
  _internal_set_kreclaimable(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.kReclaimable)
}

// float sReclaimable = 18;
inline void MemInfo::clear_sreclaimable() {
  sreclaimable_ = 0;
}
inline float MemInfo::_internal_sreclaimable() const {
  return sreclaimable_;
}
inline float MemInfo::sreclaimable() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.sReclaimable)
  return _internal_sreclaimable();
}
inline void MemInfo::_internal_set_sreclaimable(float value) {
  
  sreclaimable_ = value;
}
inline void MemInfo::set_sreclaimable(float value) {
  _internal_set_sreclaimable(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.sReclaimable)
}

// float sUnreclaim = 19;
inline void MemInfo::clear_sunreclaim() {
  sunreclaim_ = 0;
}
inline float MemInfo::_internal_sunreclaim() const {
  return sunreclaim_;
}
inline float MemInfo::sunreclaim() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.sUnreclaim)
  return _internal_sunreclaim();
}
inline void MemInfo::_internal_set_sunreclaim(float value) {
  
  sunreclaim_ = value;
}
inline void MemInfo::set_sunreclaim(float value) {
  _internal_set_sunreclaim(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.sUnreclaim)
}

// float used_percent = 31;
inline void MemInfo::clear_used_percent() {
  used_percent_ = 0;
}
inline float MemInfo::_internal_used_percent() const {
  return used_percent_;
}
inline float MemInfo::used_percent() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MemInfo.used_percent)
  return _internal_used_percent();
}
inline void MemInfo::_internal_set_used_percent(float value) {
  
  used_percent_ = value;
}
inline void MemInfo::set_used_percent(float value) {
  _internal_set_used_percent(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MemInfo.used_percent)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace rpc_monitor

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mem_5finfo_2eproto
