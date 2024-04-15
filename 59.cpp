#include <iostream>

int main() {
    int num = 1;
    char *p = (char *)&num;
    std::cout << (int)*p << '\n';

    return 0;
}