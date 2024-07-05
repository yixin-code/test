#include <iostream>
#include <dirent.h>

int main(int argc, char *argv[]) {
    DIR     *p  = opendir("/home/yixin/Code/cpp");
    dirent  *p2 = readdir(p);
    std::cout << p2->d_name << "\n";
    std::cout << p2->d_name << "\n";
    std::cout << p2->d_name << "\n";
    closedir(p);

    return 0;
}