#include "../core.hpp"
#include <cassert>
int main() {
    std::vector<int64_t> left{3, 4, 2, 1, 3, 3};
    std::vector<int64_t> right{4, 3, 5, 3, 9, 3};
    assert(left.size() == 6);
    assert(right.size() == 6);
    assert(similarity(left, right) == int64_t(31));
}