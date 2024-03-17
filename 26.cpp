#include <iostream>
#include <unistd.h>

int main(int argc, char *argv[]) {
    pid_t pid = fork();
    if (pid == 0) {
        while (true) {
            std::cout << "child process" << std::endl;
            sleep(1);
        }
        exit(0);
    }
    if (pid > 0) {
        exit(0);
        // while (true) {
        //     std::cout << "parent process" << std::endl;
        //     sleep(1);
        // }
    }

    return 0;
}