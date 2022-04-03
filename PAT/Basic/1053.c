#include <stdio.h>

int main(void) {
    int N, D;
    double e;
    scanf("%d %lf %d", &N, &e, &D);

    int maybe = 0, empty = 0;
    for (int i = 0; i < N; i++) {
        int n, days = 0;
        double today;
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%lf", &today);
            if (today < e) {
                days++;
            }
        }

        if (days > n / 2) {
            if (n > D) {
                empty++;
            } else {
                maybe++;
            }
        }

        printf("%.1f%% %.1f%%\n", (double)maybe / N * 100, (double)empty / N * 100);

        return 0;
    }
