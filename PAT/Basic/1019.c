/**
 * 1019 数字黑洞
 * 提交次数: 6
 * TIPS:
 *  - 不足四位的，要在前面补 0
 *  - 即使输入6174，也要排序求差后判断
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 4

int decrease(char ar[], int n);
int increase(char ar[], int n);
int char2num(char ar[], int n);
void num2char(int num);

char N[SIZE];

int main(void) {
    while (scanf("%s", N) != EOF) {
        for (int i = 0; i < SIZE; i++) {
            if (!N[i]) {
                N[i] = 48;
            }
        }

        int a = decrease(N, SIZE);
        int b = increase(N, SIZE);
        int result = a - b;

        while (result != 6174 && result != 0) {
            printf("%04d - %04d = %04d\n", a, b, result);
            num2char(result);
            a = decrease(N, SIZE);
            b = increase(N, SIZE);
            result = a - b;
        }
        printf("%04d - %04d = %04d\n", a, b, result);
        memset(N, '\0', SIZE * sizeof(int));
    }

    return 0;
}

int decrease(char ar[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ar[j] < ar[j + 1]) {
                char temp = ar[j + 1];
                ar[j + 1] = ar[j];
                ar[j] = temp;
            }
        }
    }
    return char2num(ar, n);
}

int increase(char ar[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ar[j] > ar[j + 1]) {
                char temp = ar[j + 1];
                ar[j + 1] = ar[j];
                ar[j] = temp;
            }
        }
    }
    return char2num(ar, n);
}

int char2num(char ar[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total = total * 10 + (ar[i] - 48);
    }
    return total;
}

void num2char(int num) {
    int index = 3;
    while (num > 0) {
        N[index] = num % 10 + 48;
        num = num / 10;
        index--;
    }
}
