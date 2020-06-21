// Copyright (c) 2012-2020, The CryptoNote developers, The Bitcuty developers HB1team.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

#ifdef __EMSCRIPTEN__
#include "platform/DBmemory.hpp"
namespace platform {
typedef DBmemory DB;
}
#elif platform_USE_SQLITE
#include "platform/DBsqlite3.hpp"
namespace platform {
typedef DBsqliteKV DB;
}
#else
#include "platform/DBlmdb.hpp"
namespace platform {
typedef DBlmdb DB;
}
#endif
