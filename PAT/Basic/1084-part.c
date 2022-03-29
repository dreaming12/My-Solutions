//  数字较大
#include <stdio.h>

int outward(int num) {
    int digit, prev = -1, times = 0;
    int res = 0;

    if (num == 0) {
        res = 1;
    }

    while (num > 0) {
        digit = num % 10;
        num = num / 10;

        if (prev == -1 || digit == prev) {
            times++;
        } else if (digit != prev) {
            res = res * 100 + prev * 10 + times;
            times = 1;
        }
        if (num == 0) {
            res = res * 100 + digit * 10 + times;
        }

        prev = digit;
    }

    return res;
}

int reverse(int num) {
    int res = 0;
    while (num > 0) {
        int digit = num % 10;
        num = num / 10;
        res = res * 10 + digit;
    }
    return res;
}

int main(void) {
    int d, N;
    scanf("%d %d", &d, &N);

    int res = d;
    for (int i = 1; i < N; i++) {
        res = reverse(outward(res));
    }

    printf("%d\n", reverse(res));

    return 0;
}

// 1
// 11
// 12
// 1121
// 122111
// 112213
// 12221131
// 1123123111
