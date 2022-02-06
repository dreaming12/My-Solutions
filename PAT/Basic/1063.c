/**
 * 1063 计算谱半径
 * 提交次数: 1
 * TIPS:
 *  - 0917
 */
#include <math.h>
#include <stdio.h>

int main(void) {
    int N;
    while (scanf("%d", &N) != EOF) {
        double max = 0.0;
        while (N--) {
            int real, imag;
            if (scanf("%d %d", &real, &imag) == 2) {
                double r = sqrt(pow(real, 2) + pow(imag, 2));
                if (r > max) {
                    max = r;
                }
            }
        }
        printf("%.2f\n", max);
    }

    return 0;
}
