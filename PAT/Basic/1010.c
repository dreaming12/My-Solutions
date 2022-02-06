/**
 * 1010 一元多项式求导
 * 提交次数: 2
 * TIPS:
 *  - 注意只有常数的时候
 */
#include <stdio.h>

int main(void) {
    int a, b;
    int index = 0, flag = 0;

    while (scanf("%d %d", &a, &b) == 2) {
        if (index != 0 && b != 0) {
            putchar(' ');
        }
        index++;

        if (b != 0) {
            printf("%d %d", a * b, b - 1);
            flag = 1;
        }

        if (!flag) {
            printf("0 0");
        }
    }

    return 0;
}
