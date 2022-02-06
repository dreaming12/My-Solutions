/**
 * 1020 月饼
 * 提交次数: 4
 * TIPS:
 *  - 库存可能不是整数
 *  - 所有的库存可能不满足要求
 *  - 如果使用了 int，注意与 double 的转换
 */
#include <stdio.h>
#define SIZE 1001

double store[SIZE][2];

double main(void) {
    int N, D;

    while (scanf("%d %d", &N, &D) != EOF) {
        for (int i = 0; i < N; i++) {
            scanf("%lf", &store[i][0]);
        }
        for (int j = 0; j < N; j++) {
            scanf("%lf", &store[j][1]);
        }

        double remain = D;
        double total = 0;
        while (remain > 0) {
            int index = -1;
            double price = -1;

            for (int k = 0; k < N; k++) {
                double temp = store[k][1] / store[k][0];
                if (temp > price) {
                    price = temp;
                    index = k;
                }
            }
            if (price == 0) {
                break;
            }

            double sub = 0;
            if (remain >= store[index][0]) {
                sub = store[index][1];
            } else {
                sub = remain / store[index][0] * store[index][1];
            }
            remain = remain - store[index][0];
            total += sub;
            store[index][1] = 0;
        }

        printf("%.2f\n", total);
    }

    return 0;
}
