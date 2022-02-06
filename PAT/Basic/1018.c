/**
 * 1018 锤子剪刀布
 * 提交次数: 7
 * TIPS:
 *  - 读取时注意剔除换行符
 *  - 解不唯一时，输出按字母序的最小解
 */
#include <stdio.h>
#define SIZE 6

int a[SIZE], b[SIZE];  // win, draw, lose | win - C, J, B

void print_win(int arr[]) {
    int max = 5;

    if (arr[3] > arr[max]) {
        max = 3;
    } else if (arr[4] > arr[max]) {
        max = 4;
    }

    if (max == 3) {
        putchar('C');
    } else if (max == 4) {
        putchar('J');
    } else {
        putchar('B');
    }
}

int main(void) {
    int N;

    while (scanf("%d", &N) != EOF) {
        char x, y;
        getchar();
        for (int i = 0; i < N; i++) {
            scanf("%c %c", &x, &y);
            getchar();

            if (x == 'C' && y == 'J') {
                a[0]++;
                a[3]++;
            } else if (x == 'C' && y == 'B') {
                b[0]++;
                b[5]++;
            } else if (x == 'J' && y == 'C') {
                b[0]++;
                b[3]++;
            } else if (x == 'J' && y == 'B') {
                a[0]++;
                a[4]++;
            } else if (x == 'B' && y == 'C') {
                a[0]++;
                a[5]++;
            } else if (x == 'B' && y == 'J') {
                b[0]++;
                b[4]++;
            } else {
                a[1]++;
            }
        }
        a[2] = b[0];
        b[1] = a[1];
        b[2] = a[0];

        printf("%d %d %d\n", a[0], a[1], a[2]);
        printf("%d %d %d\n", b[0], b[1], b[2]);
        print_win(a);
        putchar(' ');
        print_win(b);
        putchar('\n');
    }

    return 0;
}
