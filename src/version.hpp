// Copyright (c) 2012-2020, The CryptoNote developers, The Bitcuty developers HB1team.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

// defines are for Windows resource compiler
#define bitcuty_VERSION_WINDOWS_COMMA 3, 19, 7, 18
#define bitcuty_VERSION_STRING "v3.5.1"

#ifndef RC_INVOKED  // Windows resource compiler

namespace cn {
inline const char *app_version() { return bitcuty_VERSION_STRING; }
}  // namespace cn

#endif
