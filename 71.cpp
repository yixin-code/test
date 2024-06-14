#include <iostream>

int main(int argc, char *argv[]) {
    int arr[] {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};

    for (const auto val : arr) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    return 0;
}