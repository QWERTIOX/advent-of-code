#pragma once
#include <cstdint>
#include <vector>
int64_t distance(std::vector<int64_t> &left, std::vector<int64_t> &right);
int64_t similarity(const std::vector<int64_t> &left,
                   const std::vector<int64_t> &right);