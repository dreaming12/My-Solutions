/**
 * 1001 害死人不偿命的(3n+1)猜想
 * 提交次数：3
 * TIPS:
 *     - 循环终止条件没写
 */
#include <stdio.h>
int main(void) {
    int n, steps = 0;
    while (scanf("%d", &n) != EOF) {
        while (n != 1) {
            if (n % 2) {
                n = (3 * n + 1) / 2;
            } else {
                n = n / 2;
            }
            steps++;
        }
        printf("%d\n", steps);
    }
    return 0;
}
