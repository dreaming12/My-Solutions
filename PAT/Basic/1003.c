/**
 * 1003 我要通过！
 * 提交次数: 9
 * TIPS:
 *  - a(A) * b(A) = c(A)
 */
// TODO
#include <stdio.h>
#define SIZE 10
#define LEN 101

int str[LEN][SIZE];

int main(void) {
    int n;

    while (scanf("%d", &n) != EOF) {
        getchar();
        for (int i = 0; i < n; i++) {
            scanf("%s", &str[i]);
        }

        for (int j = 0; j < n; j++) {
            for (int k = 0; str[j][k] != '\0'; k++) {
                int a, b, c;
                a = b = c = 0;
                int flag = 0;

                if (str[j][k] == 'P') {
                    if (flag == 1) {
                        flag = 0;
                        break;
                    }
                    flag = 1;
                } else if (str[j][k] == 'A') {
                    if (flag == 0) {
                        a++;
                    } else if (flag == 1) {
                        b++;
                    } else if (flag == 2) {
                        c++;
                    }
                } else if (str[j][k] == 'T') {
                    if (flag == 1 || flag == 2) {
                        flag = 0;
                        break;
                    }
                    flag = 2;
                } else {
                    flag = 0;
                    break;
                }

                if (a * b != c || b == 0) {
                    flag = 0;
                    break;
                }

                if (flag) {
                    printf("YES\n");
                } else {
                    printf("NO\n");
                }
            }
        }
    }

    return 0;
}
