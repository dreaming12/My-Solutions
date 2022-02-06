/**
 * 1076 Wifi密码
 * 提交次数: 1
 * TIPS:
 *  - 如果用 %c 读取，注意 N 后的换行符
 *  - 为什么 %d 不行。。。
 */
#include <stdio.h>

void print_num(char ch) {
    switch (ch) {
    case 'A':
        putchar('1');
        break;
    case 'B':
        putchar('2');
        break;
    case 'C':
        putchar('3');
        break;
    case 'D':
        putchar('4');
        break;
    default:
        break;
    }
}

int main(void) {
    int N;

    while (scanf("%d", &N) != EOF) {
        getchar();
        char no1, ans1, no2, ans2, no3, ans3, no4, ans4;
        for (int i = 0; i < N; i++) {
            if (scanf("%c-%c %c-%c %c-%c %c-%c", &no1, &ans1, &no2, &ans2, &no3, &ans3, &no4, &ans4) == 8) {
                if (ans1 == 'T') {
                    print_num(no1);
                }
                if (ans2 == 'T') {
                    print_num(no2);
                }
                if (ans3 == 'T') {
                    print_num(no3);
                }
                if (ans4 == 'T') {
                    print_num(no4);
                }
                getchar();
            }
        }
        putchar('\n');
    }

    return 0;
}
