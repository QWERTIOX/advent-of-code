#include "core.hpp"
#include <fmt/color.h>
#include <fmt/core.h>
#include <iostream>

int main() {
    int64_t temp;
    std::vector<int64_t> left, right;
    while (std::cin >> temp) {
        left.push_back(temp);
        std::cin >> temp;
        right.push_back(temp);
    }
    fmt::println("Distance: {1}\nSimilarity: {0}", similarity,
                 distance(left, right));
}