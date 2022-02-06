/**
 * 1002 写出这个数
 * 提交次数：2
 * TIPS:
 *     - NULL
 */
#include <stdio.h>
#define SIZE 101

char *pin_yin[] = {"ling", "yi",  "er", "san", "si",
                   "wu",   "liu", "qi", "ba",  "jiu"};
int digits[SIZE];
char num[SIZE];
char *p = &num[0];

int main(void) {
    while (scanf("%s", p) != EOF) {
        int i = 0, sum = 0;
        while (num[i]) {
            sum += (num[i] - '0');
            i++;
        }

        int j = 0, index = -1;
        while (sum >= 10) {
            digits[j] = sum % 10;
            sum = sum / 10;
            j++;
            index++;
        }
        if (sum != 0) {
            digits[j] = sum;
            index++;
        }

        for (int k = index; k != -1; k--) {
            printf("%s", pin_yin[digits[k]]);
            if (k != 0) {
                printf(" ");
            }
        }
    }

    return 0;
}
