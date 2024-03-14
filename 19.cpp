#include <iostream>
#include <unistd.h>
#include <signal.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("3, fork error");
        exit(1);
    } else if (pid == 0) {
        std::cout << "son process, " << "pid: " << getpid() << ", ppid: " << getppid() << std::endl;
    } else if (pid > 0) {
        std::cout << "father process, " << "pid: " << getpid() << ", ppid: " << getppid() << std::endl;
        sleep(3);
    }

    return 0;
}