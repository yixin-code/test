#include <iostream>
#include <dirent.h>

int main(int argc, char *argv[]) {
    if (true) {
        goto fly;
    }

    if (true) {
        int num = 11;
        std::cout << "num: " << num << "\n";
    }

    for (u_int32_t i = 0; i < 11; i++) {
    }

fly:
    std::cout << "fly\n";
    // DIR     *p  = opendir("/home/yixin/Code/cpp");
    // dirent  *p2 = readdir(p);
    // std::cout << p2->d_name << "\n";
    // std::cout << p2->d_name << "\n";
    // std::cout << p2->d_name << "\n";
    // closedir(p);

    return 0;
}