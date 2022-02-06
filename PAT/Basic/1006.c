/**
 * 1006 换个格式输出整数
 * 提交次数: 1
 * TIPS:
 * 	- XXX
 */
#include <stdio.h>

int main(void) {
    int n;

    while (scanf("%d", &n) != EOF) {
        int a, b, c;
        a = b = c = 0;

        if (n > 99) {
            a = n / 100;
            n = n % 100;
        }
        if (n > 9) {
            b = n / 10;
            n = n % 10;
        }
        if (n > 0) {
            c = n;
        }

        for (int i = 0; i < a; i++) {
            printf("%c", 'B');
        }
        for (int j = 0; j < b; j++) {
            printf("%c", 'S');
        }
        for (int k = 1; k <= c; k++) {
            printf("%d", k);
        }
    }

    return 0;
}
