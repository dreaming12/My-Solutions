/**
 * 1012 数字分类
 * 提交次数: 1
 * TIPS:
 *  - 想好了再写。。。
 */
#include <stdio.h>

void print_result(double result, int index) {
    if ((int)result != -1) {
        if (index == 1 || index == 2 || index == 3 || index == 5) {
            if (index == 5) {
                printf("%d", (int)result);
            } else {
                printf("%d ", (int)result);
            }
        } else {
            printf("%.1f ", result);
        }
    } else {
        if (index != 5) {
            printf("N ");
        } else {
            printf("N");
        }
    }
}

int main(void) {
    int n, num;

    scanf("%d", &n);
    int a1, a2, a3, a5;
    double a4 = -1.0;
    int a4num = 0;
    a1 = a2 = a3 = a5 = -1;
    int flag = 1;
    while (n--) {
        scanf("%d", &num);

        int k = num % 5;
        if (k == 0) {
            if (num % 2 == 0) {
                if (a1 == -1) {
                    a1 = num;
                } else {
                    a1 += num;
                }
            }
        } else if (k == 1) {
            if (a2 == -1) {
                a2 = num;
            } else {
                flag = -flag;
                a2 += flag * num;
            }
        } else if (k == 2) {
            if (a3 == -1) {
                a3 = 1;
            } else {
                a3++;
            }
        } else if (k == 3) {
            a4num++;
            if (a4 == -1) {
                a4 = num;
            } else {
                a4 += num;
            }
        } else if (k == 4) {
            if (num > a5) {
                a5 = num;
            }
        }
    }
    if (a4num != 0) {
        a4 = a4 / a4num;
    }

    print_result(a1, 1);
    print_result(a2, 2);
    print_result(a3, 3);
    print_result(a4, 4);
    print_result(a5, 5);

    return 0;
}
