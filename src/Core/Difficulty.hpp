// Copyright (c) 2012-2020, The CryptoNote developers, The Bitcuty developers HB1team.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

#include <cstdint>
#include <vector>

#include "CryptoNote.hpp"
#include "common/Int128.hpp"

namespace cn {

bool check_hash(const crypto::Hash &hash, Difficulty difficulty);

typedef common::Uint128 CumulativeDifficulty;
}  // namespace cn
