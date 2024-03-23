#include <iostream>

class CStudent {
private:
    static CStudent* m_s_p_instance;

private:
    CStudent() = default;

public:
    ~CStudent() {
        std::cout << "~CStudent() {" << std::endl;
    }

public:
    static CStudent* get_instance() {
        m_s_p_instance = new CStudent{};

        return m_s_p_instance;
    }

    void work() {
        std::cout << "do work~~~~" << std::endl;
    }
};

CStudent *CStudent::m_s_p_instance = nullptr;

int main() {
    CStudent * p = CStudent::get_instance();
    p->work();

    return 0;
}