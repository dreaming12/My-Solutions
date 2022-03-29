// 忘记更新 top_dis, bottom_dis
#include <stdio.h>

int distance(int x, int y) {
    return x * x + y * y;
}

int main(void) {
    int N;
    scanf("%d", &N);

    int top_id, bottom_id;
    int top_dis, bottom_dis;
    int id, x, y;
    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &id, &x, &y);

        if (i == 0) {
            top_id = bottom_id = id;
            top_dis = bottom_dis = distance(x, y);
        }

        int res = distance(x, y);
        if (res > bottom_dis) {
            bottom_id = id;
            bottom_dis = res;
        }
        if (res < top_dis) {
            top_id = id;
            top_dis = res;
        }
    }

    printf("%04d %04d\n", top_id, bottom_id);

    return 0;
}
