#include <stdio.h>

// 你来写：交换 a 和 b 所指的两个变量的值
void swap(int* a, int* b) {
    int zhong;
    zhong = *a;
    *a = *b;
    *b = zhong;
}

int main() {
    int x = 1, y = 2;
    swap(&x, &y);
    printf("x=%d  y=%d\n", x, y);   // 期望：x=2  y=1
    return 0;
}