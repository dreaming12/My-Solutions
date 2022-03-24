#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000

typedef struct item {
    int diff;
    int times;
} item;

item res[SIZE];

int compare(const void *a, const void *b) {
    return -((*(item *)a).diff - (*(item *)b).diff);
}

int main(void) {
    int N;
    scanf("%d", &N);

    int index = 0;
    int num;
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        int diff = abs(num - i - 1);
        // printf("-- %d\n", diff);
        int flag = 1;
        for (int j = 0; j < index; j++) {
            if (diff == res[j].diff) {
                res[j].times++;
                flag = 0;
            }
        }
        if (flag) {
            res[index].diff = diff;
            res[index].times = 1;
            index++;
        }
    }

    qsort(res, index, sizeof(item), compare);

    for (int i = 0; i < index; i++) {
        if (res[i].times > 1) {
            printf("%d %d\n", res[i].diff, res[i].times);
        }
    }

    return 0;
}
