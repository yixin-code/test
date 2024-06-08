#include <cstdlib>
#include <iostream>
#include <pthread.h>
#include <semaphore.h>

int main() {
    // system("warpd");
    // const pthread_mutex_t mutex;
    sem_t   sem;
    sem_init(&sem, 0, 1);
    sem_wait(&sem);

    std::cout << "main\n";

    return 0;
}
