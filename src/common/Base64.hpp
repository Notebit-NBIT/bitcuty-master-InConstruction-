// Copyright (c) 2012-2020, The CryptoNote developers, The Bitcuty developers HB1team.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

#include <cstdint>
#include <string>
#include "BinaryArray.hpp"

namespace common { namespace base64 {

std::string encode(const BinaryArray &data);
bool decode(const std::string &enc, BinaryArray *data);
}}  // namespace common::base64
