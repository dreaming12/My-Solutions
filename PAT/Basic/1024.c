/**
 * 1024 科学计数法
 * 提交次数: 1
 * TIPS:
 *  - strchr() 注意没有 a
 *  - 注意字符数字的数值
 *  - 注意 E 后为 0 的情况
 */
// TODO
#include <stdio.h>
#include <string.h>
#define SIZE 20000

char num[SIZE];

int main(void) {
    while (scanf("%s", num) != EOF) {
        if (num[0] == '-') {
            putchar('-');
        }

        char* flag = strchr(num, 'E') + 1;
        char symbol = *flag;
        int times = 0;
        while (*++flag) {
            times = times * 10 + (*flag - 48);
        }

        if (symbol == '+') {
            for (int i = 1; num[i] != 'E'; i++) {
                if (times == 0) {
                    break;
                } else {
                    if (num[i] == '.' && times > 0 && num[i + 1] != 'E') {
                        char temp = num[i];
                        num[i] = num[i + 1];
                        num[i + 1] = temp;
                        times--;
                    }
                }
            }
        } else {
            
        }
        putchar('\n');
    }

    return 0;
}
// TODO
