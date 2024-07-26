#include <iostream>
#include <unistd.h>

int main(int argc, char *argv[]) {
    execlp("./78", "./78", nullptr);

    std::cout << "79 end\n";

    return 0;
}