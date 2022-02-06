/**
 * 1013 数素数
 * 提交次数: 2
 * TIPS:
 *  - 提交时注意删除测试语句！！！
 *  - 为什么将 i++ 移到后面会导致结果无法输出？如果后移，当 i = 4 的时候会卡死在
 * if 上
 */
#include <math.h>
#include <stdio.h>
#define SIZE 20000

int prime[SIZE];

int is_prime(int num) {
    int flag = 1;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            flag = 0;
        }
    }

    return flag;
}

int main(void) {
    int i = 2, num = 0, index = 1;
    int m, n;

    while (scanf("%d %d", &m, &n) != EOF) {
        while (num < n) {
            if (is_prime(i++) && (++num >= m)) {
                prime[index++] = i - 1;
            }
        }

        for (int j = 1; j < index; j++) {
            if (j % 10 == 0) {
                printf("%d\n", prime[j]);
            } else if (j == index - 1) {
                printf("%d", prime[j]);
            } else {
                printf("%d ", prime[j]);
            }
        }
    }

    return 0;
}
