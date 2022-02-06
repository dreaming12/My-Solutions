/**
 * 1023 组个最小数
 * 提交次数: 1
 * TIPS:
 *  - NULL
 */
#include <stdio.h>
#define SIZE 10

int num[SIZE];

int main(void) {
    int min = 10;
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &num[i]);
        if (num[i] > 0 && i < min && i != 0) {
            min = i;
        }
    }

    printf("%d", min);
    num[min]--;
    for (int j = 0; j < SIZE; j++) {
        for (int k = 0; k < num[j]; k++) {
            printf("%d", j);
        }
    }
    putchar('\n');

    return 0;
}
