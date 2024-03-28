#include <iostream>
#include <string.h>

int main() {
    char buf[] = "警方快速搭建    ";
    // char buf[] = "fhlsdafhldsjf    ";

    // int temp_index = strlen(buf) - 1;
    // while (isspace(buf[temp_index])) {
    //     --temp_index;
    // }
    // buf[temp_index + 1] = 0;
    int temp_size = strlen(buf);
    while (isspace(buf[temp_size - 1]) && temp_size > 0) {
        buf[--temp_size] = 0;
    }

    std::cout << "[" << buf << "]" << std::endl;

    return 0;
}