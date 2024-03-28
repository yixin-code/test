#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec {1, 2, 3, 4, 5};
    std::cout << vec.size() << '\n';
    std::cout << vec.capacity() << '\n';
    vec.clear();
    std::cout << vec.size() << '\n';
    std::cout << vec.capacity() << '\n';

    return 0;
}