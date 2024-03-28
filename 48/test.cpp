#include <iostream>
#include "test.h"

int main() {
    Student s {"aaa", 11};
    std::cout << s.m_name << " " << s.m_age << '\n';

    return 0;
}