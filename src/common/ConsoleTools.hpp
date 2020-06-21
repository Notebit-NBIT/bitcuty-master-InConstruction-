// Copyright (c) 2012-2020, The CryptoNote developers, The Bitcuty developers HB1team.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

#include <cstdint>
#include <sstream>

namespace common { namespace console {

enum Color : char {
	Default,

	Blue,
	Green,
	Red,
	Yellow,
	White,
	Cyan,
	Magenta,

	BrightBlue,
	BrightGreen,
	BrightRed,
	BrightYellow,
	BrightWhite,
	BrightCyan,
	BrightMagenta
};

void set_text_color(Color color);
bool is_console_tty();

// On windows we set up utf-8 console encoding and prevent splitting multibyte chars by cout
class UnicodeConsoleSetup : public std::stringbuf {
#ifdef _WIN32  // prevent unused variable warning
	std::streambuf *old_buf = nullptr;
#endif

protected:
	int sync() override;

public:
	UnicodeConsoleSetup();
	~UnicodeConsoleSetup() override;

	bool getline(std::string &line, bool hide_input = false);
};
}}  // namespace common::console
