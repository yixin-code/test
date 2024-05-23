#include <iostream>
#include <pthread.h>

void* func(void *arg) {
    std::cout << "func thread: " << pthread_self() << std::endl;
    pthread_exit(nullptr);
}

int main() {
    pthread_t tid = 0;
    pthread_create(&tid, nullptr, func, nullptr);
    pthread_detach(pthread_self());
    std::cout << "main thread: " << tid << std::endl;

    return 0;
}