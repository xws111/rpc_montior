// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: monitor_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_monitor_5finfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_monitor_5finfo_2eproto

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
#include <google/protobuf/empty.pb.h>
#include "cpu_load.pb.h"
#include "cpu_softirq.pb.h"
#include "cpu_stat.pb.h"
#include "mem_info.pb.h"
#include "net_info.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_monitor_5finfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_monitor_5finfo_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_monitor_5finfo_2eproto;
namespace rpc_monitor {
class MonitorInfo;
class MonitorInfoDefaultTypeInternal;
extern MonitorInfoDefaultTypeInternal _MonitorInfo_default_instance_;
}  // namespace rpc_monitor
PROTOBUF_NAMESPACE_OPEN
template<> ::rpc_monitor::MonitorInfo* Arena::CreateMaybeMessage<::rpc_monitor::MonitorInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace rpc_monitor {

// ===================================================================

class MonitorInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:rpc_monitor.MonitorInfo) */ {
 public:
  inline MonitorInfo() : MonitorInfo(nullptr) {}
  virtual ~MonitorInfo();

  MonitorInfo(const MonitorInfo& from);
  MonitorInfo(MonitorInfo&& from) noexcept
    : MonitorInfo() {
    *this = ::std::move(from);
  }

  inline MonitorInfo& operator=(const MonitorInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline MonitorInfo& operator=(MonitorInfo&& from) noexcept {
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
  static const MonitorInfo& default_instance();

  static inline const MonitorInfo* internal_default_instance() {
    return reinterpret_cast<const MonitorInfo*>(
               &_MonitorInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MonitorInfo& a, MonitorInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(MonitorInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MonitorInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MonitorInfo* New() const final {
    return CreateMaybeMessage<MonitorInfo>(nullptr);
  }

  MonitorInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MonitorInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MonitorInfo& from);
  void MergeFrom(const MonitorInfo& from);
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
  void InternalSwap(MonitorInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rpc_monitor.MonitorInfo";
  }
  protected:
  explicit MonitorInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_monitor_5finfo_2eproto);
    return ::descriptor_table_monitor_5finfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSoftIrqFieldNumber = 4,
    kCpuStatFieldNumber = 6,
    kNetInfoFieldNumber = 8,
    kNameFieldNumber = 1,
    kCpuLoadFieldNumber = 5,
    kMemInfoFieldNumber = 7,
  };
  // repeated .rpc_monitor.SoftIrq soft_irq = 4;
  int soft_irq_size() const;
  private:
  int _internal_soft_irq_size() const;
  public:
  void clear_soft_irq();
  ::rpc_monitor::SoftIrq* mutable_soft_irq(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::SoftIrq >*
      mutable_soft_irq();
  private:
  const ::rpc_monitor::SoftIrq& _internal_soft_irq(int index) const;
  ::rpc_monitor::SoftIrq* _internal_add_soft_irq();
  public:
  const ::rpc_monitor::SoftIrq& soft_irq(int index) const;
  ::rpc_monitor::SoftIrq* add_soft_irq();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::SoftIrq >&
      soft_irq() const;

  // repeated .rpc_monitor.CpuStat cpu_stat = 6;
  int cpu_stat_size() const;
  private:
  int _internal_cpu_stat_size() const;
  public:
  void clear_cpu_stat();
  ::rpc_monitor::CpuStat* mutable_cpu_stat(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::CpuStat >*
      mutable_cpu_stat();
  private:
  const ::rpc_monitor::CpuStat& _internal_cpu_stat(int index) const;
  ::rpc_monitor::CpuStat* _internal_add_cpu_stat();
  public:
  const ::rpc_monitor::CpuStat& cpu_stat(int index) const;
  ::rpc_monitor::CpuStat* add_cpu_stat();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::CpuStat >&
      cpu_stat() const;

  // repeated .rpc_monitor.NetInfo net_info = 8;
  int net_info_size() const;
  private:
  int _internal_net_info_size() const;
  public:
  void clear_net_info();
  ::rpc_monitor::NetInfo* mutable_net_info(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::NetInfo >*
      mutable_net_info();
  private:
  const ::rpc_monitor::NetInfo& _internal_net_info(int index) const;
  ::rpc_monitor::NetInfo* _internal_add_net_info();
  public:
  const ::rpc_monitor::NetInfo& net_info(int index) const;
  ::rpc_monitor::NetInfo* add_net_info();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::NetInfo >&
      net_info() const;

  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .rpc_monitor.CpuLoad cpu_load = 5;
  bool has_cpu_load() const;
  private:
  bool _internal_has_cpu_load() const;
  public:
  void clear_cpu_load();
  const ::rpc_monitor::CpuLoad& cpu_load() const;
  ::rpc_monitor::CpuLoad* release_cpu_load();
  ::rpc_monitor::CpuLoad* mutable_cpu_load();
  void set_allocated_cpu_load(::rpc_monitor::CpuLoad* cpu_load);
  private:
  const ::rpc_monitor::CpuLoad& _internal_cpu_load() const;
  ::rpc_monitor::CpuLoad* _internal_mutable_cpu_load();
  public:
  void unsafe_arena_set_allocated_cpu_load(
      ::rpc_monitor::CpuLoad* cpu_load);
  ::rpc_monitor::CpuLoad* unsafe_arena_release_cpu_load();

  // .rpc_monitor.MemInfo mem_info = 7;
  bool has_mem_info() const;
  private:
  bool _internal_has_mem_info() const;
  public:
  void clear_mem_info();
  const ::rpc_monitor::MemInfo& mem_info() const;
  ::rpc_monitor::MemInfo* release_mem_info();
  ::rpc_monitor::MemInfo* mutable_mem_info();
  void set_allocated_mem_info(::rpc_monitor::MemInfo* mem_info);
  private:
  const ::rpc_monitor::MemInfo& _internal_mem_info() const;
  ::rpc_monitor::MemInfo* _internal_mutable_mem_info();
  public:
  void unsafe_arena_set_allocated_mem_info(
      ::rpc_monitor::MemInfo* mem_info);
  ::rpc_monitor::MemInfo* unsafe_arena_release_mem_info();

  // @@protoc_insertion_point(class_scope:rpc_monitor.MonitorInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::SoftIrq > soft_irq_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::CpuStat > cpu_stat_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::NetInfo > net_info_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::rpc_monitor::CpuLoad* cpu_load_;
  ::rpc_monitor::MemInfo* mem_info_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_monitor_5finfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MonitorInfo

// string name = 1;
inline void MonitorInfo::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& MonitorInfo::name() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MonitorInfo.name)
  return _internal_name();
}
inline void MonitorInfo::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:rpc_monitor.MonitorInfo.name)
}
inline std::string* MonitorInfo::mutable_name() {
  // @@protoc_insertion_point(field_mutable:rpc_monitor.MonitorInfo.name)
  return _internal_mutable_name();
}
inline const std::string& MonitorInfo::_internal_name() const {
  return name_.Get();
}
inline void MonitorInfo::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void MonitorInfo::set_name(std::string&& value) {
  
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rpc_monitor.MonitorInfo.name)
}
inline void MonitorInfo::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:rpc_monitor.MonitorInfo.name)
}
inline void MonitorInfo::set_name(const char* value,
    size_t size) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rpc_monitor.MonitorInfo.name)
}
inline std::string* MonitorInfo::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* MonitorInfo::release_name() {
  // @@protoc_insertion_point(field_release:rpc_monitor.MonitorInfo.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void MonitorInfo::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rpc_monitor.MonitorInfo.name)
}

// repeated .rpc_monitor.SoftIrq soft_irq = 4;
inline int MonitorInfo::_internal_soft_irq_size() const {
  return soft_irq_.size();
}
inline int MonitorInfo::soft_irq_size() const {
  return _internal_soft_irq_size();
}
inline ::rpc_monitor::SoftIrq* MonitorInfo::mutable_soft_irq(int index) {
  // @@protoc_insertion_point(field_mutable:rpc_monitor.MonitorInfo.soft_irq)
  return soft_irq_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::SoftIrq >*
MonitorInfo::mutable_soft_irq() {
  // @@protoc_insertion_point(field_mutable_list:rpc_monitor.MonitorInfo.soft_irq)
  return &soft_irq_;
}
inline const ::rpc_monitor::SoftIrq& MonitorInfo::_internal_soft_irq(int index) const {
  return soft_irq_.Get(index);
}
inline const ::rpc_monitor::SoftIrq& MonitorInfo::soft_irq(int index) const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MonitorInfo.soft_irq)
  return _internal_soft_irq(index);
}
inline ::rpc_monitor::SoftIrq* MonitorInfo::_internal_add_soft_irq() {
  return soft_irq_.Add();
}
inline ::rpc_monitor::SoftIrq* MonitorInfo::add_soft_irq() {
  // @@protoc_insertion_point(field_add:rpc_monitor.MonitorInfo.soft_irq)
  return _internal_add_soft_irq();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::SoftIrq >&
MonitorInfo::soft_irq() const {
  // @@protoc_insertion_point(field_list:rpc_monitor.MonitorInfo.soft_irq)
  return soft_irq_;
}

// .rpc_monitor.CpuLoad cpu_load = 5;
inline bool MonitorInfo::_internal_has_cpu_load() const {
  return this != internal_default_instance() && cpu_load_ != nullptr;
}
inline bool MonitorInfo::has_cpu_load() const {
  return _internal_has_cpu_load();
}
inline const ::rpc_monitor::CpuLoad& MonitorInfo::_internal_cpu_load() const {
  const ::rpc_monitor::CpuLoad* p = cpu_load_;
  return p != nullptr ? *p : reinterpret_cast<const ::rpc_monitor::CpuLoad&>(
      ::rpc_monitor::_CpuLoad_default_instance_);
}
inline const ::rpc_monitor::CpuLoad& MonitorInfo::cpu_load() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MonitorInfo.cpu_load)
  return _internal_cpu_load();
}
inline void MonitorInfo::unsafe_arena_set_allocated_cpu_load(
    ::rpc_monitor::CpuLoad* cpu_load) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(cpu_load_);
  }
  cpu_load_ = cpu_load;
  if (cpu_load) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:rpc_monitor.MonitorInfo.cpu_load)
}
inline ::rpc_monitor::CpuLoad* MonitorInfo::release_cpu_load() {
  
  ::rpc_monitor::CpuLoad* temp = cpu_load_;
  cpu_load_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::rpc_monitor::CpuLoad* MonitorInfo::unsafe_arena_release_cpu_load() {
  // @@protoc_insertion_point(field_release:rpc_monitor.MonitorInfo.cpu_load)
  
  ::rpc_monitor::CpuLoad* temp = cpu_load_;
  cpu_load_ = nullptr;
  return temp;
}
inline ::rpc_monitor::CpuLoad* MonitorInfo::_internal_mutable_cpu_load() {
  
  if (cpu_load_ == nullptr) {
    auto* p = CreateMaybeMessage<::rpc_monitor::CpuLoad>(GetArena());
    cpu_load_ = p;
  }
  return cpu_load_;
}
inline ::rpc_monitor::CpuLoad* MonitorInfo::mutable_cpu_load() {
  // @@protoc_insertion_point(field_mutable:rpc_monitor.MonitorInfo.cpu_load)
  return _internal_mutable_cpu_load();
}
inline void MonitorInfo::set_allocated_cpu_load(::rpc_monitor::CpuLoad* cpu_load) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(cpu_load_);
  }
  if (cpu_load) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(cpu_load)->GetArena();
    if (message_arena != submessage_arena) {
      cpu_load = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, cpu_load, submessage_arena);
    }
    
  } else {
    
  }
  cpu_load_ = cpu_load;
  // @@protoc_insertion_point(field_set_allocated:rpc_monitor.MonitorInfo.cpu_load)
}

// repeated .rpc_monitor.CpuStat cpu_stat = 6;
inline int MonitorInfo::_internal_cpu_stat_size() const {
  return cpu_stat_.size();
}
inline int MonitorInfo::cpu_stat_size() const {
  return _internal_cpu_stat_size();
}
inline ::rpc_monitor::CpuStat* MonitorInfo::mutable_cpu_stat(int index) {
  // @@protoc_insertion_point(field_mutable:rpc_monitor.MonitorInfo.cpu_stat)
  return cpu_stat_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::CpuStat >*
MonitorInfo::mutable_cpu_stat() {
  // @@protoc_insertion_point(field_mutable_list:rpc_monitor.MonitorInfo.cpu_stat)
  return &cpu_stat_;
}
inline const ::rpc_monitor::CpuStat& MonitorInfo::_internal_cpu_stat(int index) const {
  return cpu_stat_.Get(index);
}
inline const ::rpc_monitor::CpuStat& MonitorInfo::cpu_stat(int index) const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MonitorInfo.cpu_stat)
  return _internal_cpu_stat(index);
}
inline ::rpc_monitor::CpuStat* MonitorInfo::_internal_add_cpu_stat() {
  return cpu_stat_.Add();
}
inline ::rpc_monitor::CpuStat* MonitorInfo::add_cpu_stat() {
  // @@protoc_insertion_point(field_add:rpc_monitor.MonitorInfo.cpu_stat)
  return _internal_add_cpu_stat();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::CpuStat >&
MonitorInfo::cpu_stat() const {
  // @@protoc_insertion_point(field_list:rpc_monitor.MonitorInfo.cpu_stat)
  return cpu_stat_;
}

// .rpc_monitor.MemInfo mem_info = 7;
inline bool MonitorInfo::_internal_has_mem_info() const {
  return this != internal_default_instance() && mem_info_ != nullptr;
}
inline bool MonitorInfo::has_mem_info() const {
  return _internal_has_mem_info();
}
inline const ::rpc_monitor::MemInfo& MonitorInfo::_internal_mem_info() const {
  const ::rpc_monitor::MemInfo* p = mem_info_;
  return p != nullptr ? *p : reinterpret_cast<const ::rpc_monitor::MemInfo&>(
      ::rpc_monitor::_MemInfo_default_instance_);
}
inline const ::rpc_monitor::MemInfo& MonitorInfo::mem_info() const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MonitorInfo.mem_info)
  return _internal_mem_info();
}
inline void MonitorInfo::unsafe_arena_set_allocated_mem_info(
    ::rpc_monitor::MemInfo* mem_info) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(mem_info_);
  }
  mem_info_ = mem_info;
  if (mem_info) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:rpc_monitor.MonitorInfo.mem_info)
}
inline ::rpc_monitor::MemInfo* MonitorInfo::release_mem_info() {
  
  ::rpc_monitor::MemInfo* temp = mem_info_;
  mem_info_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::rpc_monitor::MemInfo* MonitorInfo::unsafe_arena_release_mem_info() {
  // @@protoc_insertion_point(field_release:rpc_monitor.MonitorInfo.mem_info)
  
  ::rpc_monitor::MemInfo* temp = mem_info_;
  mem_info_ = nullptr;
  return temp;
}
inline ::rpc_monitor::MemInfo* MonitorInfo::_internal_mutable_mem_info() {
  
  if (mem_info_ == nullptr) {
    auto* p = CreateMaybeMessage<::rpc_monitor::MemInfo>(GetArena());
    mem_info_ = p;
  }
  return mem_info_;
}
inline ::rpc_monitor::MemInfo* MonitorInfo::mutable_mem_info() {
  // @@protoc_insertion_point(field_mutable:rpc_monitor.MonitorInfo.mem_info)
  return _internal_mutable_mem_info();
}
inline void MonitorInfo::set_allocated_mem_info(::rpc_monitor::MemInfo* mem_info) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(mem_info_);
  }
  if (mem_info) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(mem_info)->GetArena();
    if (message_arena != submessage_arena) {
      mem_info = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, mem_info, submessage_arena);
    }
    
  } else {
    
  }
  mem_info_ = mem_info;
  // @@protoc_insertion_point(field_set_allocated:rpc_monitor.MonitorInfo.mem_info)
}

// repeated .rpc_monitor.NetInfo net_info = 8;
inline int MonitorInfo::_internal_net_info_size() const {
  return net_info_.size();
}
inline int MonitorInfo::net_info_size() const {
  return _internal_net_info_size();
}
inline ::rpc_monitor::NetInfo* MonitorInfo::mutable_net_info(int index) {
  // @@protoc_insertion_point(field_mutable:rpc_monitor.MonitorInfo.net_info)
  return net_info_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::NetInfo >*
MonitorInfo::mutable_net_info() {
  // @@protoc_insertion_point(field_mutable_list:rpc_monitor.MonitorInfo.net_info)
  return &net_info_;
}
inline const ::rpc_monitor::NetInfo& MonitorInfo::_internal_net_info(int index) const {
  return net_info_.Get(index);
}
inline const ::rpc_monitor::NetInfo& MonitorInfo::net_info(int index) const {
  // @@protoc_insertion_point(field_get:rpc_monitor.MonitorInfo.net_info)
  return _internal_net_info(index);
}
inline ::rpc_monitor::NetInfo* MonitorInfo::_internal_add_net_info() {
  return net_info_.Add();
}
inline ::rpc_monitor::NetInfo* MonitorInfo::add_net_info() {
  // @@protoc_insertion_point(field_add:rpc_monitor.MonitorInfo.net_info)
  return _internal_add_net_info();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rpc_monitor::NetInfo >&
MonitorInfo::net_info() const {
  // @@protoc_insertion_point(field_list:rpc_monitor.MonitorInfo.net_info)
  return net_info_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace rpc_monitor

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_monitor_5finfo_2eproto
