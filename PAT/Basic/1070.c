// 如果较长的绳子在前面就串联，会被折叠多次，最后的绳子不可能最长
// 只有一根绳子时不用折
// res = 0, i = 0 时，第一根绳子对折了两次
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10001

int rope[SIZE];

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void) {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &rope[i]);
    }

    qsort(rope, N, sizeof(int), compare);
    double res = rope[0];
    for (int i = 1; i < N; i++) {
        res = res / 2 + rope[i] / 2.0;
        // printf("-- %lf\n", res);
    }
    printf("%d\n", (int)res);

    return 0;
}
