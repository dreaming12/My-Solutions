/**
 * 1007 素数对猜想
 * 提交次数: 3
 * TIPS:
 * 	- 注意素数的判断方法，直接用定义会超时
 *  - 关键词：不超过
 */
#include <math.h>
#include <stdio.h>
#define SIZE 100000

int a[SIZE / 2];

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
    int n;

    while (scanf("%d", &n) != EOF) {
        int index = 0;
        for (int i = 2; i <= n; i++) {
            if (is_prime(i)) {
                a[index] = i;
                index++;
            }
        }

        int pairs = 0;
        for (int j = 0; j < index - 1; j++) {
            if (a[j] + 2 == a[j + 1]) {
                pairs++;
            }
        }

        printf("%d", pairs);
    }

    return 0;
}
