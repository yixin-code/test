#include <iostream>
#include <unistd.h>
#include <string.h>
#include <pthread.h>

void clean_func(void*) {
    std::cout << "clean_func\n";
    return;
}

void *thread_func(void*) {
    pthread_exit(nullptr);
    pthread_cleanup_push(clean_func, nullptr);

    while (true) {
        pthread_testcancel();
        std::cout << "thread_func\n";
        sleep(1);
    }

    pthread_cleanup_pop(0);

    pthread_exit(nullptr);
}

int main(int argc, char *argv[]) {
    pthread_t tid = 0;
    pthread_create(&tid, nullptr, thread_func, nullptr);

    sleep(3);

    if (pthread_cancel(tid) != 0) {
        std::cout << "pthread_cancel\n";
    }

    pthread_join(tid, nullptr);

    std::cout << "main end\n";

    
    // execlp("./78", "./78", nullptr);

    // // std::cout << "79 end\n";
    // std::cout << (long)(void*)-1 << '\n';

    // int num = -1;

    // if (num == (long)(void*)-1) {
    //     std::cout << "num < (void*)-1\n";
    // }

    // void *p = (void*)-1;
    // if ((long)p == -1) {
    //     std::cout << "(int)p == -1\n";
    // }

    // std::cout << sizeof(int64_t) << '\n';
    // std::cout << sizeof(p) << '\n';

    return 0;
}