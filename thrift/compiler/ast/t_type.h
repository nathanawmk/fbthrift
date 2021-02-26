/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <stdint.h>

#include <cstring>
#include <map>
#include <sstream>
#include <string>

#include <thrift/compiler/ast/t_named.h>

namespace apache {
namespace thrift {
namespace compiler {

class t_program;

/**
 * class t_type
 *
 * Generic representation of a thrift type. These objects are used by the
 * parser module to build up a tree of object that are all explicitly typed.
 * The generic t_type class exports a variety of useful methods that are
 * used by the code generator to branch based upon different handling for the
 * various types.
 *
 */
class t_type : public t_named {
 public:
  /*
   * All the thrift supported types
   *
   * @kTypeBits - TODO: add description
   * @kTypeMask - TODO: add description
   */
  enum class type {
    t_void,
    t_string,
    t_bool,
    t_byte,
    t_i16,
    t_i32,
    t_i64,
    t_double,
    t_enum,
    t_list,
    t_set,
    t_map,
    t_struct,
    t_service,
    t_program,
    t_float,
    t_sink,
    t_stream,
    t_binary,
  };
  static constexpr size_t kTypeBits = 5;
  static constexpr uint64_t kTypeMask = (1ULL << kTypeBits) - 1;

  /**
   * t_type abstract methods
   */
  virtual std::string get_full_name() const = 0;
  virtual std::string get_impl_full_name() const = 0;
  // @get_type_value() - TODO: Renanme function
  virtual type get_type_value() const = 0;

  /**
   * Default returns for every thrift type
   */
  virtual bool is_void() const {
    return false;
  }
  virtual bool is_base_type() const {
    return false;
  }
  virtual bool is_string() const {
    return false;
  }
  virtual bool is_bool() const {
    return false;
  }
  virtual bool is_byte() const {
    return false;
  }
  virtual bool is_i16() const {
    return false;
  }
  virtual bool is_i32() const {
    return false;
  }
  virtual bool is_i64() const {
    return false;
  }
  virtual bool is_float() const {
    return false;
  }
  virtual bool is_double() const {
    return false;
  }
  virtual bool is_typedef() const {
    return false;
  }
  virtual bool is_enum() const {
    return false;
  }
  virtual bool is_struct() const {
    return false;
  }
  virtual bool is_union() const {
    return false;
  }
  virtual bool is_xception() const {
    return false;
  }
  virtual bool is_container() const {
    return false;
  }
  virtual bool is_list() const {
    return false;
  }
  virtual bool is_set() const {
    return false;
  }
  virtual bool is_map() const {
    return false;
  }
  virtual bool is_sink() const {
    return false;
  }
  virtual bool is_streamresponse() const {
    return false;
  }
  virtual bool is_service() const {
    return false;
  }
  virtual bool is_binary() const {
    return false;
  }
  virtual bool is_paramlist() const {
    return false;
  }

  bool is_string_or_binary() const {
    return is_string() || is_binary();
  }
  bool is_any_int() const {
    return is_i16() || is_i32() || is_i64();
  }
  bool is_floating_point() const {
    return is_double() || is_float();
  }

  /**
   * Create a unique hash number based on t_type's properties.
   */
  virtual uint64_t get_type_id() const;

  /**
   * Resolves all typedefs (if any) to get the true type.
   */
  const t_type* get_true_type() const;

  // TODO: make this go away. Instead use const t_type* everywhere.
  t_type* get_true_type() {
    return const_cast<t_type*>(
        const_cast<const t_type*>(this)->get_true_type());
  }

  /**
   * t_type getters
   */
  const t_program* get_program() const {
    return program_;
  }

 protected:
  /**
   * Default constructor for t_type
   *
   * A t_type object can't be initialized by itself. The constructors
   * are protected and only t_type's children can initialize it.
   */
  t_type() = default;

  /**
   * Constructor for t_type
   *
   * @param program - An entire thrift program
   */
  explicit t_type(t_program* program) : program_(program) {}

  /**
   * Constructor for t_type
   *
   * @param name - The symbolic name of the thrift type
   */
  explicit t_type(std::string name) : t_named(std::move(name)) {}

  /**
   * Constructor for t_type
   *
   * @param program - An entire thrift program
   * @param name    - The symbolic name of the thrift type
   */
  t_type(t_program* program, std::string name)
      : t_named(std::move(name)), program_(program) {}

  /**
   * Returns a string in the format "prefix program_name.type_name"
   *
   * @param prefix - A string to add before the program name / type name
   */
  std::string make_full_name(const char* prefix) const;

  t_program* program_{nullptr};
};

} // namespace compiler
} // namespace thrift
} // namespace apache
