#include <iostream>
#include <string>

class CStudent {
private:
    std::string m_name;

public:
    CStudent(const std::string& name) : m_name(name) {
        std::cout << "CStudent(std::string& name) : m_name(name) {" << std::endl;
    }

    ~CStudent() {
        std::cout << "~CStudent() {" << std::endl;
    }
};

int main() {
    // CStudent stu{"aaa"};
    CStudent *p = new CStudent{"aaa"};

    return 0;
}