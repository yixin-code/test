#include <iostream>
#include <assert.h>
#include <fstream>

int main() {
    // std::fstream fin("test3", std::ios::in);
    std::ofstream fin("test3");
    assert(fin.is_open());

    char buf[1024] = {0};

    // while (fin >> buf) {
    //     std::cout << buf;
    // }

    return 0;
}