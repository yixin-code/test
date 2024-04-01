#include <iostream>

int main() {
    char *p_str[] = {"aaa", "bbb", "ccc", "ddd"};
    char *p = "111\0222\0333\0444";
    *p_str = p;

    for (int i = 0; i < 4; ++i) {
        std::cout << p_str[i] << " ";
    }
    std::cout << '\n';

    return 0;
}