#include <iostream>
#include <signal.h>
#include <unistd.h>

void func_sigint(int sig) {
    std::cout << "func_sigint start\n";
    std::cout << "func_sigint start\n";
    std::cout << "func_sigint start\n";
    std::cout << "func_sigint start\n";
    while (true) {
        sleep(1);
        std::cout << "func_sigint wait...\n";
    }
}

void func_sighup(int sig) {
    std::cout << "func_sighup start\n";
    std::cout << "func_sighup start\n";
    std::cout << "func_sighup start\n";
    std::cout << "func_sighup start\n";
    while (true) {
        sleep(1);
        std::cout << "func_sighup wait...\n";
    }
}

int main() {
    signal(SIGINT, func_sigint);
    signal(SIGHUP, func_sighup);

    while (true) {
        sleep(1);
        std::cout << "main wait...\n";
    }

    return 0;
}