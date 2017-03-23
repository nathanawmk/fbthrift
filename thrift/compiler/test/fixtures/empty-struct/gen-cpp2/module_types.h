/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>



namespace cpp2 {

class Empty;
class Nada;

class Empty : private apache::thrift::detail::st::ComparisonOperators<Empty> {
 public:

  Empty() {}
  // FragileConstructor for use in initialization lists only

  Empty(apache::thrift::FragileConstructor) {}

  Empty(Empty&&) = default;

  Empty(const Empty&) = default;

  Empty& operator=(Empty&&) = default;

  Empty& operator=(const Empty&) = default;

  virtual ~Empty() throw() {}

  bool operator==(const Empty& /* rhs */) const;

  bool operator < (const Empty& rhs) const {
    (void)rhs;
    return false;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(Empty& a, Empty& b);
extern template uint32_t Empty::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Empty::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Empty::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Empty::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Empty::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Empty::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Empty::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Empty::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Empty>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Empty>::write(Protocol* proto,  ::cpp2::Empty const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Empty>::read(Protocol* proto,  ::cpp2::Empty* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Empty>::serializedSize(Protocol const* proto,  ::cpp2::Empty const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Empty>::serializedSizeZC(Protocol const* proto,  ::cpp2::Empty const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class Nada : private apache::thrift::detail::st::ComparisonOperators<Nada> {
 public:
  enum Type {
    __EMPTY__ = 0,
  } ;

  Nada() :
      type_(Type::__EMPTY__) {}

  Nada(Nada&& rhs) :
      type_(Type::__EMPTY__) {
    if (this == &rhs) {return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch(rhs.type_) {
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
  }

  Nada(const Nada& rhs) :
      type_(Type::__EMPTY__) {
    if (this == &rhs) {return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch(rhs.type_) {
      default:
      {
        assert(false);
        break;
      }
    }
  }

  Nada& operator=(Nada&& rhs) {
    if (this == &rhs) {return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch(rhs.type_) {
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
    return *this;
  }

  Nada& operator=(const Nada& rhs) {
    if (this == &rhs) {return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch(rhs.type_) {
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }

  virtual ~Nada() throw() {
    __clear();
  }

  union storage_type {

    storage_type() {}
    ~storage_type() {}
  } ;
  bool operator==(const Nada& /* rhs */) const;

  bool operator < (const Nada& rhs) const {
    if (type_ != rhs.type_) { return type_ < rhs.type_; }
    switch(type_) {
      default:
      {
        return false;
        break;
      }
    }
  }

  Type getType() const { return type_; }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  Type type_;
  storage_type value_;
};

void swap(Nada& a, Nada& b);
extern template uint32_t Nada::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Nada::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Nada::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Nada::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Nada::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Nada::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Nada::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Nada::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Nada>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Nada>::write(Protocol* proto,  ::cpp2::Nada const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Nada>::read(Protocol* proto,  ::cpp2::Nada* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Nada>::serializedSize(Protocol const* proto,  ::cpp2::Nada const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Nada>::serializedSizeZC(Protocol const* proto,  ::cpp2::Nada const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2
