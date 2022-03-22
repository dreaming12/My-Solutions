#include <stdio.h>
#include <math.h>

int numlen(int num) {
    int len = 0;
    while (num > 0) {
        num = num / 10;
        len++;
    }
    return len;
}

int self(int a, int b) {
    return a * b * b;
}

int main(void) {
    int M;
    scanf("%d", &M);

    while (M--) {
        int num;
        scanf("%d", &num);

        int len = numlen(num);
        int flag = 0;
        for (int i = 1; i < 10; i++) {
            int res = self(i, num);
            int tail = res % (int)pow(10, len);
            if (tail == num) {
                printf("%d %d\n", i, res);
                flag = 1;
                break;
            }
        }

        if (!flag) {
            printf("No\n");
        }
    }

    return 0;
}
