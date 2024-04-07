#include <stdio.h>  
  
int main() {  
    int i, j, n = 6;  
  
    // 打印上半部分的心形  
    for (i = n / 2; i <= n; i += 2) {  
        // 打印空格  
        for (j = 1; j < n - i; j += 2) {  
            printf(" ");  
        }  
        // 打印星号  
        for (j = 1; j <= i; j++) {  
            printf("*");  
        }  
        // 打印空格  
        for (j = 1; j <= n - i; j++) {  
            printf(" ");  
        }  
        // 打印星号  
        for (j = 1; j <= i; j++) {  
            printf("*");  
        }  
        printf("\n");  
    }  
  
    // 打印下半部分的心形  
    for (i = n; i >= 1; i--) {  
        // 打印空格  
        for (j = i; j < n; j++) {  
            printf(" ");  
        }  
        // 打印星号  
        for (j = 1; j <= (i * 2) - 1; j++) {  
            printf("*");  
        }  
        printf("\n");  
    }  
  
    return 0;  
}