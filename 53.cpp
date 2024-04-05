#include <iostream>
#include <string.h>

int main() {
    // char *p_str[] = {"aaa", "bbb", "ccc", "ddd"};
    // char *p = "111\0222\0333\0444";
    // *p_str = p;
    char **pp = new char*[3]{0};
    pp[0] = new char[4]{0};
    pp[1] = new char[4]{0};
    pp[2] = new char[4]{0};
    
    strcpy(pp[0], "aaa");
    strcpy(pp[1], "bbb");
    strcpy(pp[2], "ccc");

    for (int i = 0; i < 3; ++i) {
        std::cout << pp[i] << " ";
    }
    std::cout << '\n';

    // pp[1] = 0;

    // std::cout << "[" << pp[0] << "]" << std::endl;

    // for (int i = 0; i < 3; ++i) {
    //     std::cout << pp[i] << " ";
    // }
    // std::cout << '\n';

    for (int i = 0; i < 3; ++i) {
        delete[] pp[i];
        pp[i] = nullptr;
    }
    delete[] pp;
    pp = nullptr;

    return 0;
}