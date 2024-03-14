#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};

    std::cout << vec.size() << std::endl; // 5
    std::cout << vec.capacity() << std::endl; // 5

    vec.erase(vec.begin() + 2); // 3

    std::cout << vec.size() << std::endl; // 4
    std::cout << vec.capacity() << std::endl; // 5

    for (const int &val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}