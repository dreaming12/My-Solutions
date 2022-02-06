/**
 * 1043 输出PATest
 * 提交次数: 1
 * TIPS:
 *  - NULL
 */
#include <stdio.h>
#define SIZE 10001
#define LETTER 6

char str[SIZE];
int count[2][LETTER];

int main(void) {
    while (scanf("%s", str) != EOF) {
        count[0][0] = 'P';
        count[0][1] = 'A';
        count[0][2] = 'T';
        count[0][3] = 'e';
        count[0][4] = 's';
        count[0][5] = 't';

        for (int i = 0; str[i] != '\0'; i++) {
            for (int j = 0; j < LETTER; j++) {
                if (str[i] == count[0][j]) {
                    count[1][j]++;
                    break;
                }
            }
        }

        for (int k = 0; k < SIZE; k++) {
            int flag = 0;
            for (int l = 0; l < LETTER; l++) {
                if (count[1][l] != 0) {
                    printf("%c", count[0][l]);
                    count[1][l]--;
                    flag = 1;
                }
            }
            if (flag == 0) {
                break;
            }
        }
        putchar('\n');
    }

    return 0;
}
