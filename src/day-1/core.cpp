#include "core.hpp"
#include <algorithm>
#include <unordered_map>

// Only valid vectors can be passed
int64_t distance(std::vector<int64_t> &left, std::vector<int64_t> &right) {
    int64_t length = left.size();
    int64_t distance = 0;
    std::sort(left.begin(), left.end());
    std::sort(right.begin(), right.end());
    for (int64_t i = 0; i < length; i++) {
        distance += std::abs(left[i] - right[i]);
    }
    return distance;
}

std::unordered_map<int64_t, int64_t>
count_occurrences(const std::vector<int64_t> &numbers) {
    std::unordered_map<int64_t, int64_t> counts;
    for (auto k : numbers) {
        counts[k]++;
    }
    return counts;
}

int64_t similarity(const std::vector<int64_t> &left,
                   const std::vector<int64_t> &right) {
    auto right_m = count_occurrences(right);
    int64_t sim = 0, length = left.size();
    for (int64_t i = 0; i < length; i++) {
        sim += left[i] * right_m[left[i]];
    }
    return sim;
}