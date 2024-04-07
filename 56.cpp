#include <iostream>

int main() {
    int arr[] = {1, 2};
    int *p = arr;
    std::cout << *p << '\n';
    std::cout << *(p + 1) << '\n';
    // std::cout << *(p + 2) << '\n';

    return 0;
}