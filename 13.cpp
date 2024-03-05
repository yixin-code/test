#include <stdio.h>  
#include <stdlib.h>  
#include <signal.h>  
#include <unistd.h>  
  
int main() {  
    pid_t pid;  
  
    // 创建一个子进程  
    pid = fork();  
  
    if (pid < 0) {  
        // fork 失败  
        perror("fork");  
        exit(EXIT_FAILURE);  
    } else if (pid == 0) {  
        // 子进程中  
        printf("我是子进程，我的 PID 是 %d\n", getpid());  
        // 子进程休眠一段时间，以便我们可以找到它的 PID 并发送信号  
        sleep(10);  
        printf("子进程结束\n");  
        exit(EXIT_SUCCESS);  
    } else {  
        // 父进程中  
        printf("我是父进程，我的 PID 是 %d，子进程的 PID 是 %d\n", getpid(), pid);  
  
        // 等待一段时间，确保子进程已经开始运行  
        sleep(1);  
  
        // 向子进程发送 SIGTERM 信号  
        if (kill(pid, SIGTERM) == -1) {  
            perror("kill");  
            exit(EXIT_FAILURE);  
        }  
  
        printf("已向子进程发送 SIGTERM 信号\n");  
    }  
  
    return 0;  
}