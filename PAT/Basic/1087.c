/**
 * 1087 有多少不同的值
 * 提交次数: 1
 * TIPS:
 *  - NULL
 */
#include <stdio.h>

int main(void) {
    int N;

    while (scanf("%d", &N) != EOF) {
        int num = 0, max = -1;
        for (int i = 1; i <= N; i++) {
            int temp = i / 2 + i / 3 + i / 5;
            if (temp > max) {
                max = temp;
                num++;
            }
        }
        printf("%d\n", num);
    }

    return 0;
}
