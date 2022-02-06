/**
 * 1016 部分A+B
 * 提交次数: 1
 * TIPS:
 *  - NULL
 */
#include <stdio.h>
#define SIZE 11

char num1[SIZE], num2[SIZE];

int main(void) {
    int da, db;

    while (scanf("%s %d %s %d", num1, &da, num2, &db) != EOF) {
        int pa = 0, pb = 0;

        for (int i = 0; num1[i] != '\0'; i++) {
            if (num1[i] - 48 == da) {
                pa = (pa * 10 + da);
            }
        }
        for (int j = 0; num2[j] != '\0'; j++) {
            if (num2[j] - 48 == db) {
                pb = (pb * 10 + db);
            }
        }

        printf("%d\n", pa + pb);
    }

    return 0;
}
