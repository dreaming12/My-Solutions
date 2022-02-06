/**
 * 1089 狼人杀-简单版
 * 提交次数: 0
 * TIPS:
 *  - NULL
 */
#include <stdio.h>
#define SIZE 101

int say[SIZE];

int main(void) {
    int N;

    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            if (scanf("%d", &say[i]) == 1) {
                continue;
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (1) {}
            }
        }
    }

    return 0;
}
