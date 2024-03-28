#include <iostream>
#include <string.h>

void func(char *str) {
    const char *temp = "asdf";
    strcpy(str, temp);
}

int main() {
    char str[] = "1234214";
    func(str);
    std::cout << str << std::endl;

    return 0;
}