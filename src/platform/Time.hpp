// Copyright (c) 2012-2020, The CryptoNote developers, The Bitcuty developers HB1team.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

#include <cstdint>

namespace platform {

uint32_t now_unix_timestamp(uint32_t *usec = nullptr);
int get_time_multiplier_for_tests();
void set_time_multiplier_for_tests(int multiplier);
}  // namespace platform
