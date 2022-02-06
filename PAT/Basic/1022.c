/**
 * 1022 D进制的A+B
 * 提交次数: 1
 * TIPS:
 *  - 注意和为 0 的情况
 */
#include <stdio.h>
#define SIZE 20

int num[SIZE];

int main(void) {
    int A, B, C, D;

    while (scanf("%d %d %d", &A, &B, &D) != EOF) {
        int C = A + B;

        if (C == 0) {
            printf("0\n");
            break;
        }

        int index = -1;
        while (C >= 0) {
            index++;
            num[index] = C % D;
            C = C / D;
        }

        for (int i = index; i >= 0; i--) {
            printf("%d", num[i]);
        }
        putchar('\n');
    }

    return 0;
}
