#include <iostream>
#include <string.h>

int main() {
    char str[] = "abcd";
    char str2[] = "ABCD";

    if (strcasecmp(str, str2) == 0) {
        std::cout << "equal\n";
    }

    return 0;
}