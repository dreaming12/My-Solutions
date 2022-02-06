/**
 * 1011 A+B 和 C
 * 提交次数: 1
 * TIPS:
 *  - 数据类型的选择
 */
#include <stdio.h>

int main(void) {
    int n;
    long long a, b, c;

    scanf("%d", &n);
    int index = 0;
    while (scanf("%lld %lld %lld", &a, &b, &c) != EOF) {
        index++;
        if (a + b > c) {
            printf("Case #%d: true\n", index);
        } else {
            printf("Case #%d: false\n", index);
        }
    }

    return 0;
}
