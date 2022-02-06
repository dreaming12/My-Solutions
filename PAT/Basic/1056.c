/**
 * 1056 组合数的和
 * 提交次数: 1
 * TIPS:
 *  - NULL
 */
#include <stdio.h>
#define SIZE 11

int num[SIZE];

int main(void) {
    int N;

    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            if (scanf("%d", &num[i]) == 1) {
                continue;
            }
        }

        int total = 0;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                total += (num[i] + num[j]) * 11;
            }
        }
        printf("%d\n", total);
    }

    return 0;
}
