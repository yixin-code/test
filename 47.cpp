#include <iostream>
#include <vector>
#include <string>

class Student {
public:
    std::string m_name;
    int m_age;
    Student(const std::string &name, int age) : m_name(name), m_age(age) {}
};

int main() {
    std::vector<Student> vec;
    vec.emplace_back("yixin", 11);

    std::cout << vec[0].m_name << " " << vec[0].m_age << std::endl;

    return 0;
}