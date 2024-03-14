#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    vec.resize(10);
    std::cout << vec.size() << std::endl;
    std::cout << vec.capacity() << std::endl;

    for (const int &val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}