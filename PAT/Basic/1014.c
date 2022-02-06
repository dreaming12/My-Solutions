/**
 * 1014 福尔摩斯的约会
 * 提交次数: 4
 * TIPS:
 *  - 测试语句未删除
 *  - 前两段字符串判断时未将数字是合法的
 *  - 取到相应的值后，注意终止循环
 *  - ascii 字母数字的范围，数字 48-57，大写字母 65 - 90，小写字母 97 - 122
 */
#include <stdio.h>
#include <string.h>
#define SIZE 100
#define DAYS 7

char *weekday[DAYS] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
char *hour = "0123456789ABCDEFGHIJKLMN";
char str1[SIZE], str2[SIZE], str3[SIZE], str4[SIZE];

int main(void) {
    while (scanf("%s %s %s %s", str1, str2, str3, str4) == 4) {
        int flag = 0, d = -1, h = -1;
        for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
            if ((str1[i] == str2[i]) && ((str1[i] >= 65 && str1[i] <= 90) ||
                                         (str1[i] >= 48 && str1[i] <= 57))) {
                if (flag == 0) {
                    d = str1[i] - 65;
                    if (d <= 6 && d >= 0) {
                        flag = 1;
                    } else {
                        d = -1;
                        flag = 0;
                    }
                } else if (flag == 1) {
                    for (int j = 0; j < strlen(hour); j++) {
                        h = j;
                        if (str1[i] == hour[j]) {
                            printf("%c %c\n", str1[i], hour[j]);
                            flag = 2;
                            break;
                        }
                    }
                } else {
                    break;
                }
            }
        }

        int m = -1;
        for (int k = 0; str3[k] != '\0' && str4[k] != '\0'; k++) {
            if (str3[k] == str4[k] && ((str3[k] >= 65 && str3[k] <= 90) ||
                                       (str3[k] >= 97 && str3[k] <= 122))) {
                m = k;
                break;
            }
        }

        printf("%s %02d:%02d", weekday[d], h, m);
    }

    return 0;
}
