#include <iostream>
#include <vector>

int find_single(const std::vector<int>& vec) {
    int num = 0;

    for (const auto& val : vec) {
        num ^= val;
    }

    return num;
}

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5, 4, 3, 2, 1};

    int num = find_single(vec);

    std::cout << num << std::endl;

    return 0;
}