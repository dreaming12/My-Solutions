#include <stdio.h>
#include <math.h>

int main(void) {
    int N;
    char ch;
    scanf("%d", &N);
    getchar();
    scanf("%c", &ch);

    int level = (int)(sqrt((N + 1) / 2));
    int total = 2 * pow(level, 2) - 1;

    int i, num;
    for (i = level; i > 0; i--) {
        num = 2 * i - 1;
        for (int j = 0; j < level - i; j++) {
            putchar(' ');
        }
        for (int k = 0; k < num; k++) {
            putchar(ch);
        }
        putchar('\n');
    }
    for (i = i + 2; i <= level; i++) {
        num = 2 * i - 1;
        for (int j = 0; j < level - i; j++) {
            putchar(' ');
        }
        for (int k = 0; k < num; k++) {
            putchar(ch);
        }
        putchar('\n');
    }
    printf("%d\n", N - total);

    return 0;
}

