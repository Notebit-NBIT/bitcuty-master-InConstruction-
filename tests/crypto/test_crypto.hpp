// Copyright (c) 2012-2020, The CryptoNote developers, The Bitcuty developers HB1team.
// Licensed under the GNU Lesser General Public License. See LICENSE for
// details.

#pragma once

#include <string>

typedef bool (*test_case)(std::istream &);

void test_crypto(const std::string &test_vectors_folder, const std::vector<std::string> &selected_test_cases,
    const std::string &test_results_log, bool break_on_failure);
