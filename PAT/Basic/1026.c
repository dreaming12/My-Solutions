#include <stdio.h>

int main(void) {
    long C1, C2;
    scanf("%ld %ld", &C1, &C2);

    double time = (C2 - C1) / 100.0;
    int hour = time / 3600;
    int min = (time - hour * 3600) / 60;
    int sec = (int)((time - hour * 3600 - min * 60) + 0.5);

    printf("%02d:%02d:%02d\n", hour, min, sec);

    return 0;
}

