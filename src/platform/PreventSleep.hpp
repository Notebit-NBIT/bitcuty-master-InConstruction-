// Copyright (c) 2012-2020, The CryptoNote developers, The Bitcuty developers HB1team.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

namespace platform {

class PreventSleep {
public:
	explicit PreventSleep(const char *reason);  // some OSes will show this string to user
	~PreventSleep();
};
}  // namespace platform
