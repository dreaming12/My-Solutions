/**
 * 1039 到底买不买
 * 提交次数: 1
 * TIPS:
 *  - origin[i] == want[j] && origin[i] != -1，注意判断 -1
 */
#include <stdio.h>
#define SIZE 1001

char origin[SIZE];
char want[SIZE];

int main(void) {
    while (scanf("%s %s", origin, want) != EOF) {
        for (int i = 0; origin[i] != '\0'; i++) {
            for (int j = 0; want[j] != '\0'; j++) {
                if (origin[i] == want[j] && origin[i] != -1) {
                    origin[i] = want[j] = -1;
                }
            }
        }

        int lack = 0, over = 0;
        for (int k = 0; origin[k] != '\0'; k++) {
            if (origin[k] != -1) {
                over++;
            }
        }
        for (int l = 0; want[l] != '\0'; l++) {
            if (want[l] != -1) {
                lack++;
            }
        }

        if (lack == 0) {
            printf("Yes %d\n", over);
        } else {
            printf("No %d\n", lack);
        }
    }

    return 0;
}
