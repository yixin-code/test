#include <iostream>
#include <signal.h>
#include <unistd.h>

void func_sigusr1(int sig) {
    while (true) {
        signal(SIGUSR2, SIG_IGN);
        std::cout << "######func sigusr1######" << std::endl;
        sleep(1);
    }
}

void func_sigusr2(int sig) {
    while (true) {
        std::cout << "@@@@@@func sigusr2@@@@@@" << std::endl;
        sleep(1);
    }
}

int main() {
    if (signal(SIGUSR1, func_sigusr1) == SIG_ERR) {
        perror("6, sigusr1 error");
        exit(1);
    }

    if (signal(SIGUSR2, func_sigusr2) == SIG_ERR) {
        perror("19, sigusr2 error");
        exit(1);
    }

    while(true);

    return 0;
}