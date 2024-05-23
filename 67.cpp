#include <iostream>
// #include <pthread.h>
#include <list>

// void* func(void *arg) {
//     std::cout << "func thread: " << pthread_self() << std::endl;
//     pthread_exit(nullptr);
// }

int main() {
    std::list<int> l {1, 2, 3, 4, 5};
    std::list<int>::iterator it = l.end();
    // std::cout << *it << std::endl;
    l.erase(it);
    // std::cout << *it << std::endl;
    // l.erase(it);
    // std::cout << *it << std::endl; // 2
    // std::cout << *it2 << std::endl; // 2
    // pthread_t tid = 0;
    // pthread_create(&tid, nullptr, func, nullptr);
    // pthread_detach(pthread_self());
    // std::cout << "main thread: " << tid << std::endl;

    return 0;
}