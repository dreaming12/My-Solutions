/**
 * 1008 数组元素循环右移问题
 * 提交次数: 3
 * TIPS:
 *  - NULL
 */
#include <stdio.h>
#define SIZE 100

int a[SIZE];

int main(void) {
    int n, offset;

    while (scanf("%d %d", &n, &offset) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        offset = n - offset % n;
        for (int i = offset; i < n; i++) {
            printf("%d ", a[i]);
        }
        for (int j = 0; j < offset; j++) {
            if (j == offset - 1) {
                printf("%d", a[j]);
            } else {
                printf("%d ", a[j]);
            }
        }
    }

    return 0;
}
