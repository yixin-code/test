#include <iostream>
#include <string.h>

int main() {
    char str[] = "abcd";
    char str2[] = "ABCD";

    if (strcasecmp(str, str2) == 0) {
        std::cout << "equal\n";
    }

    char *p = new char;
    std::cout << p << '\n';

    return 0;
}