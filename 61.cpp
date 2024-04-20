#include <iostream>
#include <stdarg.h>

// void func(int num, ...) {
//     va_list ap;
//     va_start(ap, num);

//     while (num-- != 0) {
//         std::cout << va_arg(ap, int64_t) << '\n';
//     }

//     va_end(ap);
// }

const char* func(const char *p) {
    p++;

    return p;
}

int main() {
    const char *p = "abc";
    p = func(p);
    std::cout << p << "\n";
    // double num = 1;
    // printf("%.2lf\n", num);
    // func(3, 11, 22, 33);
    // int num = 11;
    // printf("%%%d\n", num);
    // while (true) {
        // switch (num) {
        // case 11: {
        //     std::cout << "1\n";
        //     continue;
        // }
        // }
        // std::cout << "end\n";
        // break;
    // }

    return 0;
}