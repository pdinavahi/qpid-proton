#ifndef PROTON_LISTENER_HPP
#define PROTON_LISTENER_HPP

/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include "./fwd.hpp"
#include "./internal/export.hpp"

#include <string>

namespace proton {

/// A listener for incoming connections.
class PN_CPP_CLASS_EXTERN listener {
  public:
    /// Create an empty listener.
    PN_CPP_EXTERN listener();

    /// @cond INTERNAL
    PN_CPP_EXTERN listener(container&, const std::string&);
    /// @endcond

    /// Stop listening on the address provided to the call to
    /// container::listen that returned this listener.
    PN_CPP_EXTERN void stop();

 private:
    std::string url_;
    container* container_;
};

} // proton

#endif // PROTON_LISTENER_HPP
