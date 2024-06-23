#include <iostream>
#include <queue>
#include <unistd.h>

int main(int argc, char *argv[]) {
    // std::queue<int> q;
    // if (q.empty()) {
    //     std::cout << "q is empty\n";
    // }
    char buf[1024] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    read(STDIN_FILENO, buf, sizeof(buf));
    std::cout << buf << "\n";

    return 0;
}