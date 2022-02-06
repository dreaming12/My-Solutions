/**
 * 1042 字符统计
 * 提交次数: 1
 * TIPS:
 *  - NULL
 */
#include <ctype.h>
#include <stdio.h>
#define MAX 1002
#define LETTER 27

char str[MAX];
int res[2][LETTER];

int main(void) {
    while (fgets(str, MAX, stdin) != NULL) {
        for (int i = 1, ch = 'a'; i < LETTER; i++, ch++) {
            res[0][i] = ch;
        }

        for (int j = 0; str[j] != '\0'; j++) {
            if (isalpha(str[j])) {
                str[j] = tolower(str[j]);
                for (int k = 1; k < LETTER; k++) {
                    if (str[j] == res[0][k]) {
                        res[1][k]++;
                    }
                }
            }
        }

        char max_ch = res[0][1];
        int max_num = res[1][1];
        for (int l = 2; l < LETTER; l++) {
            if (res[1][l] > max_num) {
                max_ch = res[0][l];
                max_num = res[1][l];
            }
        }
        printf("%c %d\n", max_ch, max_num);
    }

    return 0;
}
