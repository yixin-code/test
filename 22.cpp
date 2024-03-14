#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec(10);
    // vec.resize(10);
    // vec.reserve(10);
    std::cout << vec.size() << std::endl; // 0
    std::cout << vec.capacity() << std::endl; // 10

    for (const int &val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}