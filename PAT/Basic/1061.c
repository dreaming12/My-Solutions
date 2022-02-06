/**
 * 1061 判断题
 * 提交次数: 1
 * TIPS:
 *  - 第三行是答案，而不是从第三行开始代表学生的正误。。。（然后发现最后一行是多余的）
 */
#include <stdio.h>
#define SIZE 101

int res[SIZE][SIZE];
int score[SIZE];
int ans[SIZE];

int main(void) {
    int N, M;
    while (scanf("%d %d", &N, &M) != EOF) {
        for (int i = 0; i < M; i++) {
            if (scanf("%d", &score[i]) == 1) {
                continue;
            }
        }
        for (int l = 0; l < M; l++) {
            if (scanf("%d", &ans[l]) == 1) {
                continue;
            }
        }
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                if (scanf("%d", &res[j][k]) == 1) {
                    continue;
                }
            }
        }

        for (int m = 0; m < N; m++) {
            int total = 0;
            for (int n = 0; n < M; n++) {
                if (res[m][n] == ans[n]) {
                    total += score[n];
                }
            }
            printf("%d\n", total);
        }
    }

    return 0;
}
