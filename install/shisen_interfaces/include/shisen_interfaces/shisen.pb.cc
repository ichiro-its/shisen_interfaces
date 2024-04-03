// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: shisen.proto

#include "shisen.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace shisen_interfaces {
namespace proto3 {

inline constexpr Image::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : data_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Image::Image(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ImageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ImageDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ImageDefaultTypeInternal() {}
  union {
    Image _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ImageDefaultTypeInternal _Image_default_instance_;
      template <typename>
PROTOBUF_CONSTEXPR Empty::Empty(::_pbi::ConstantInitialized) {}
struct EmptyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EmptyDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~EmptyDefaultTypeInternal() {}
  union {
    Empty _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EmptyDefaultTypeInternal _Empty_default_instance_;

inline constexpr CaptureSetting::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : json_capture_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR CaptureSetting::CaptureSetting(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct CaptureSettingDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CaptureSettingDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CaptureSettingDefaultTypeInternal() {}
  union {
    CaptureSetting _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CaptureSettingDefaultTypeInternal _CaptureSetting_default_instance_;
}  // namespace proto3
}  // namespace shisen_interfaces
static ::_pb::Metadata file_level_metadata_shisen_2eproto[3];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_shisen_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_shisen_2eproto = nullptr;
const ::uint32_t TableStruct_shisen_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::shisen_interfaces::proto3::Empty, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::shisen_interfaces::proto3::CaptureSetting, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::shisen_interfaces::proto3::CaptureSetting, _impl_.json_capture_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::shisen_interfaces::proto3::Image, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::shisen_interfaces::proto3::Image, _impl_.data_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::shisen_interfaces::proto3::Empty)},
        {8, -1, -1, sizeof(::shisen_interfaces::proto3::CaptureSetting)},
        {17, -1, -1, sizeof(::shisen_interfaces::proto3::Image)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::shisen_interfaces::proto3::_Empty_default_instance_._instance,
    &::shisen_interfaces::proto3::_CaptureSetting_default_instance_._instance,
    &::shisen_interfaces::proto3::_Image_default_instance_._instance,
};
const char descriptor_table_protodef_shisen_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\014shisen.proto\022\030shisen_interfaces.proto3"
    "\"\007\n\005Empty\"&\n\016CaptureSetting\022\024\n\014json_capt"
    "ure\030\001 \001(\t\"\025\n\005Image\022\014\n\004data\030\001 \001(\0142\377\002\n\006Con"
    "fig\022`\n\021GetCaptureSetting\022\037.shisen_interf"
    "aces.proto3.Empty\032(.shisen_interfaces.pr"
    "oto3.CaptureSetting\"\000\022a\n\022SaveCaptureSett"
    "ing\022(.shisen_interfaces.proto3.CaptureSe"
    "tting\032\037.shisen_interfaces.proto3.Empty\"\000"
    "\022`\n\021SetCaptureSetting\022(.shisen_interface"
    "s.proto3.CaptureSetting\032\037.shisen_interfa"
    "ces.proto3.Empty\"\000\022N\n\010GetImage\022\037.shisen_"
    "interfaces.proto3.Empty\032\037.shisen_interfa"
    "ces.proto3.Image\"\000b\006proto3"
};
static ::absl::once_flag descriptor_table_shisen_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_shisen_2eproto = {
    false,
    false,
    506,
    descriptor_table_protodef_shisen_2eproto,
    "shisen.proto",
    &descriptor_table_shisen_2eproto_once,
    nullptr,
    0,
    3,
    schemas,
    file_default_instances,
    TableStruct_shisen_2eproto::offsets,
    file_level_metadata_shisen_2eproto,
    file_level_enum_descriptors_shisen_2eproto,
    file_level_service_descriptors_shisen_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_shisen_2eproto_getter() {
  return &descriptor_table_shisen_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_shisen_2eproto(&descriptor_table_shisen_2eproto);
namespace shisen_interfaces {
namespace proto3 {
// ===================================================================

class Empty::_Internal {
 public:
};

Empty::Empty(::google::protobuf::Arena* arena)
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
  // @@protoc_insertion_point(arena_constructor:shisen_interfaces.proto3.Empty)
}
Empty::Empty(
    ::google::protobuf::Arena* arena,
    const Empty& from)
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
  Empty* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);

  // @@protoc_insertion_point(copy_constructor:shisen_interfaces.proto3.Empty)
}









::google::protobuf::Metadata Empty::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_shisen_2eproto_getter, &descriptor_table_shisen_2eproto_once,
      file_level_metadata_shisen_2eproto[0]);
}
// ===================================================================

class CaptureSetting::_Internal {
 public:
};

CaptureSetting::CaptureSetting(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:shisen_interfaces.proto3.CaptureSetting)
}
inline PROTOBUF_NDEBUG_INLINE CaptureSetting::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : json_capture_(arena, from.json_capture_),
        _cached_size_{0} {}

CaptureSetting::CaptureSetting(
    ::google::protobuf::Arena* arena,
    const CaptureSetting& from)
    : ::google::protobuf::Message(arena) {
  CaptureSetting* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:shisen_interfaces.proto3.CaptureSetting)
}
inline PROTOBUF_NDEBUG_INLINE CaptureSetting::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : json_capture_(arena),
        _cached_size_{0} {}

inline void CaptureSetting::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
CaptureSetting::~CaptureSetting() {
  // @@protoc_insertion_point(destructor:shisen_interfaces.proto3.CaptureSetting)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void CaptureSetting::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.json_capture_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void CaptureSetting::Clear() {
// @@protoc_insertion_point(message_clear_start:shisen_interfaces.proto3.CaptureSetting)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.json_capture_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* CaptureSetting::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 60, 2> CaptureSetting::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_CaptureSetting_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string json_capture = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(CaptureSetting, _impl_.json_capture_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string json_capture = 1;
    {PROTOBUF_FIELD_OFFSET(CaptureSetting, _impl_.json_capture_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\47\14\0\0\0\0\0\0"
    "shisen_interfaces.proto3.CaptureSetting"
    "json_capture"
  }},
};

::uint8_t* CaptureSetting::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:shisen_interfaces.proto3.CaptureSetting)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string json_capture = 1;
  if (!this->_internal_json_capture().empty()) {
    const std::string& _s = this->_internal_json_capture();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "shisen_interfaces.proto3.CaptureSetting.json_capture");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:shisen_interfaces.proto3.CaptureSetting)
  return target;
}

::size_t CaptureSetting::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:shisen_interfaces.proto3.CaptureSetting)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string json_capture = 1;
  if (!this->_internal_json_capture().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_json_capture());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData CaptureSetting::_class_data_ = {
    CaptureSetting::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* CaptureSetting::GetClassData() const {
  return &_class_data_;
}

void CaptureSetting::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<CaptureSetting*>(&to_msg);
  auto& from = static_cast<const CaptureSetting&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:shisen_interfaces.proto3.CaptureSetting)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_json_capture().empty()) {
    _this->_internal_set_json_capture(from._internal_json_capture());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void CaptureSetting::CopyFrom(const CaptureSetting& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:shisen_interfaces.proto3.CaptureSetting)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool CaptureSetting::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* CaptureSetting::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void CaptureSetting::InternalSwap(CaptureSetting* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.json_capture_, &other->_impl_.json_capture_, arena);
}

::google::protobuf::Metadata CaptureSetting::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_shisen_2eproto_getter, &descriptor_table_shisen_2eproto_once,
      file_level_metadata_shisen_2eproto[1]);
}
// ===================================================================

class Image::_Internal {
 public:
};

Image::Image(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:shisen_interfaces.proto3.Image)
}
inline PROTOBUF_NDEBUG_INLINE Image::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : data_(arena, from.data_),
        _cached_size_{0} {}

Image::Image(
    ::google::protobuf::Arena* arena,
    const Image& from)
    : ::google::protobuf::Message(arena) {
  Image* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:shisen_interfaces.proto3.Image)
}
inline PROTOBUF_NDEBUG_INLINE Image::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : data_(arena),
        _cached_size_{0} {}

inline void Image::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Image::~Image() {
  // @@protoc_insertion_point(destructor:shisen_interfaces.proto3.Image)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Image::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.data_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Image::Clear() {
// @@protoc_insertion_point(message_clear_start:shisen_interfaces.proto3.Image)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.data_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Image::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> Image::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Image_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // bytes data = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Image, _impl_.data_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bytes data = 1;
    {PROTOBUF_FIELD_OFFSET(Image, _impl_.data_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* Image::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:shisen_interfaces.proto3.Image)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // bytes data = 1;
  if (!this->_internal_data().empty()) {
    const std::string& _s = this->_internal_data();
    target = stream->WriteBytesMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:shisen_interfaces.proto3.Image)
  return target;
}

::size_t Image::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:shisen_interfaces.proto3.Image)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes data = 1;
  if (!this->_internal_data().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_data());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Image::_class_data_ = {
    Image::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Image::GetClassData() const {
  return &_class_data_;
}

void Image::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Image*>(&to_msg);
  auto& from = static_cast<const Image&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:shisen_interfaces.proto3.Image)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_data().empty()) {
    _this->_internal_set_data(from._internal_data());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Image::CopyFrom(const Image& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:shisen_interfaces.proto3.Image)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Image::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Image::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Image::InternalSwap(Image* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.data_, &other->_impl_.data_, arena);
}

::google::protobuf::Metadata Image::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_shisen_2eproto_getter, &descriptor_table_shisen_2eproto_once,
      file_level_metadata_shisen_2eproto[2]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace proto3
}  // namespace shisen_interfaces
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
