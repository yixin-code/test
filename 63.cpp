// #include <iostream>
// #include <random>

// int main() {

//     std::random_device rd;
//     std::mt19937 mt(rd());

//     std::uniform_int_distribution<> dis(1, 3);

//     for (int i = 0; i < 10; ++i) {
//         std::cout << dis(mt) << " ";
//     }
//     std::cout << '\n';

//     return 0;
// }
#include <unistd.h>  
#include <stdio.h>  
#include <string.h>
#include <iostream>
  
// void set_cursor_position(int x, int y) {  
//     system("clear");
//     char buf[32] = {0};
//     snprintf(buf, sizeof(buf), "\033[%d;%dH", y, x);  
//     // write(STDOUT_FILENO, buf, strlen(buf));  
//     std::cout << buf;
// }  
  
// int main() {  
//     // 将光标移动到第 10 行，第 20 列  
//     set_cursor_position(20, 10);  
//     printf("Hello, world!\n"); // 这行文本将在指定位置显示  
//     return 0;  
// }
int main(int argc, char *argv[]) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> dis(1, WIDE - 2);

    for (int i = 0; i < m_size; ++i) {
        while (((m_food.m_x = dis(mt)) == m_snake[i]->m_x) && ((m_food.m_y = dis(mt)) == m_snake[i]->m_y));
        break;
    }

    return 0;
}