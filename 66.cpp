#include <iostream>

int main(int argc, char *argv[]) {
    char buf[] = "abc";
    char *p = buf;
    char *p2 = buf + 1;
    std::cout << p << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p2 - p << std::endl;

    return 0;
}