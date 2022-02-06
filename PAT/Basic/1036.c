/**
 * 1036 跟奥巴马一起编程
 * 提交次数: 1
 * TIPS:
 *  - NULL
 */
#include <stdio.h>

int main(void) {
    int N;
    char C;

    while (scanf("%d %c", &N, &C) != EOF) {
        int height = N / 2;
        if (N % 2 == 1) {
            height++;
        }
        for (int i = 0; i < height; i++) {
            if (i == 0 || i == height - 1) {
                for (int j = 0; j < N; j++) {
                    printf("%c", C);
                }
                printf("\n");
            } else {
                for (int j = 0; j < N; j++) {
                    if (j == 0 || j == N - 1) {
                        printf("%c", C);
                    } else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
    }

    return 0;
}
