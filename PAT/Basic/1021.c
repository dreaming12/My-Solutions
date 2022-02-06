/**
 * 1021 个位数统计
 * 提交次数: 1
 * TIPS:
 *  - 不要一边排序，一边将排序过的项做记号，一边输出
 */
#include <stdio.h>
#define SIZE 1001

char N[SIZE];
int store[SIZE][2];

int main(void) {
    while (scanf("%s", N) != EOF) {
        int index = -1;
        int flag = 0;

        for (int i = 0; N[i] != '\0'; i++) {
            for (int j = 0; j <= index; j++) {
                if (store[j][0] == N[i]) {
                    store[j][1]++;
                    flag = 1;
                }
            }
            if (!flag) {
                index++;
                store[index][0] = N[i];
                store[index][1]++;
            }
            flag = 0;
        }

        for (int k = 0; k < index; k++) {
            for (int l = 0; l < index - k; l++) {
                if (store[l][0] > store[l + 1][0]) {
                    int tempi = store[l + 1][0];
                    int tempv = store[l + 1][1];
                    store[l + 1][0] = store[l][0];
                    store[l + 1][1] = store[l][1];
                    store[l][0] = tempi;
                    store[l][1] = tempv;
                }
            }
        }

        for (int k = 0; k <= index; k++) {
            printf("%c:%d\n", store[k][0], store[k][1]);
        }
    }

    return 0;
}
