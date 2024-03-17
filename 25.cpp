#include <iostream>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == -1) {
        perror("4, fork");
        exit(1);
    }

    if (pid == 0) {
        std::cout << "I am child process, pid: " << getpid() << ", pgid: " << getpgid(getpid()) << ", sid: " << getsid(getpid()) << std::endl;
        // setsid();
        std::cout << "I am child process, pid: " << getpid() << ", pgid: " << getpgid(getpid()) << ", sid: " << getsid(getpid()) << std::endl;
        // while (true) {}
        exit(0);
    } else if (pid > 0) {
        wait(nullptr);
        std::cout << "I am parent process, pid: " << getpid() << ", pgid: " << getpgid(getpid()) << ", sid: " << getsid(getpid()) << std::endl;
        exit(0);
    }

    return 0;
}