/**
 * 1017 A除以B
 * 提交次数: 2
 * TIPS:
 *  - 注意 A 比 B 小的情况
 *  - 注意对 0 的处理
 */
#include <stdio.h>
#define SIZE 1001

char A[SIZE], Q[SIZE];

int main(void) {
    int B, R = 0;

    while (scanf("%s %d", A, &B) != EOF) {
        int num = 0, index = 0;

        for (int i = 0; A[i] != '\0'; i++) {
            num += A[i] - 48;
            int j = num / B;
            Q[index] = j + 48;
            index++;
            num = num % B;
            num *= 10;
        }
        R = num / 10;

        for (int k = 0; k < index; k++) {
            if (index > 1 && k == 0 && Q[k] == '0') {
                continue;
            }
            printf("%c", Q[k]);
        }

        printf(" %d\n", R);
    }

    return 0;
}
