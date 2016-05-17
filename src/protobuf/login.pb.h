// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: login.proto

#ifndef PROTOBUF_login_2eproto__INCLUDED
#define PROTOBUF_login_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_login_2eproto();
void protobuf_AssignDesc_login_2eproto();
void protobuf_ShutdownFile_login_2eproto();

class PBC2SLoginReq;
class PBS2CLoginRes;

// ===================================================================

class PBC2SLoginReq : public ::google::protobuf::Message {
 public:
  PBC2SLoginReq();
  virtual ~PBC2SLoginReq();

  PBC2SLoginReq(const PBC2SLoginReq& from);

  inline PBC2SLoginReq& operator=(const PBC2SLoginReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PBC2SLoginReq& default_instance();

  void Swap(PBC2SLoginReq* other);

  // implements Message ----------------------------------------------

  PBC2SLoginReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBC2SLoginReq& from);
  void MergeFrom(const PBC2SLoginReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string username = 1;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUsernameFieldNumber = 1;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  inline void set_allocated_username(::std::string* username);

  // required string password = 2;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 2;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // @@protoc_insertion_point(class_scope:PBC2SLoginReq)
 private:
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_password();
  inline void clear_has_password();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* username_;
  ::std::string* password_;
  friend void  protobuf_AddDesc_login_2eproto();
  friend void protobuf_AssignDesc_login_2eproto();
  friend void protobuf_ShutdownFile_login_2eproto();

  void InitAsDefaultInstance();
  static PBC2SLoginReq* default_instance_;
};
// -------------------------------------------------------------------

class PBS2CLoginRes : public ::google::protobuf::Message {
 public:
  PBS2CLoginRes();
  virtual ~PBS2CLoginRes();

  PBS2CLoginRes(const PBS2CLoginRes& from);

  inline PBS2CLoginRes& operator=(const PBS2CLoginRes& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PBS2CLoginRes& default_instance();

  void Swap(PBS2CLoginRes* other);

  // implements Message ----------------------------------------------

  PBS2CLoginRes* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBS2CLoginRes& from);
  void MergeFrom(const PBS2CLoginRes& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool loginResult = 1;
  inline bool has_loginresult() const;
  inline void clear_loginresult();
  static const int kLoginResultFieldNumber = 1;
  inline bool loginresult() const;
  inline void set_loginresult(bool value);

  // @@protoc_insertion_point(class_scope:PBS2CLoginRes)
 private:
  inline void set_has_loginresult();
  inline void clear_has_loginresult();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  bool loginresult_;
  friend void  protobuf_AddDesc_login_2eproto();
  friend void protobuf_AssignDesc_login_2eproto();
  friend void protobuf_ShutdownFile_login_2eproto();

  void InitAsDefaultInstance();
  static PBS2CLoginRes* default_instance_;
};
// ===================================================================


// ===================================================================

// PBC2SLoginReq

// required string username = 1;
inline bool PBC2SLoginReq::has_username() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PBC2SLoginReq::set_has_username() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PBC2SLoginReq::clear_has_username() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PBC2SLoginReq::clear_username() {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& PBC2SLoginReq::username() const {
  // @@protoc_insertion_point(field_get:PBC2SLoginReq.username)
  return *username_;
}
inline void PBC2SLoginReq::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(value);
  // @@protoc_insertion_point(field_set:PBC2SLoginReq.username)
}
inline void PBC2SLoginReq::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(value);
  // @@protoc_insertion_point(field_set_char:PBC2SLoginReq.username)
}
inline void PBC2SLoginReq::set_username(const char* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PBC2SLoginReq.username)
}
inline ::std::string* PBC2SLoginReq::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:PBC2SLoginReq.username)
  return username_;
}
inline ::std::string* PBC2SLoginReq::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void PBC2SLoginReq::set_allocated_username(::std::string* username) {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete username_;
  }
  if (username) {
    set_has_username();
    username_ = username;
  } else {
    clear_has_username();
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:PBC2SLoginReq.username)
}

// required string password = 2;
inline bool PBC2SLoginReq::has_password() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PBC2SLoginReq::set_has_password() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PBC2SLoginReq::clear_has_password() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PBC2SLoginReq::clear_password() {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& PBC2SLoginReq::password() const {
  // @@protoc_insertion_point(field_get:PBC2SLoginReq.password)
  return *password_;
}
inline void PBC2SLoginReq::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set:PBC2SLoginReq.password)
}
inline void PBC2SLoginReq::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set_char:PBC2SLoginReq.password)
}
inline void PBC2SLoginReq::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PBC2SLoginReq.password)
}
inline ::std::string* PBC2SLoginReq::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:PBC2SLoginReq.password)
  return password_;
}
inline ::std::string* PBC2SLoginReq::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void PBC2SLoginReq::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:PBC2SLoginReq.password)
}

// -------------------------------------------------------------------

// PBS2CLoginRes

// required bool loginResult = 1;
inline bool PBS2CLoginRes::has_loginresult() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PBS2CLoginRes::set_has_loginresult() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PBS2CLoginRes::clear_has_loginresult() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PBS2CLoginRes::clear_loginresult() {
  loginresult_ = false;
  clear_has_loginresult();
}
inline bool PBS2CLoginRes::loginresult() const {
  // @@protoc_insertion_point(field_get:PBS2CLoginRes.loginResult)
  return loginresult_;
}
inline void PBS2CLoginRes::set_loginresult(bool value) {
  set_has_loginresult();
  loginresult_ = value;
  // @@protoc_insertion_point(field_set:PBS2CLoginRes.loginResult)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_login_2eproto__INCLUDED
