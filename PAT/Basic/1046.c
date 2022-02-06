/**
 * 1046 划拳
 * 提交次数: 1
 * TIPS:
 *  - 输的喝酒。。。
 */
#include <stdio.h>
#define SIZE 101

int main(void) {
    int N;

    while (scanf("%d", &N) != EOF) {
        int a_drink = 0, b_drink = 0;
        for (int i = 0; i < N; i++) {
            int a_say, a_act, b_say, b_act;
            if (scanf("%d %d %d %d", &a_say, &a_act, &b_say, &b_act) == 4) {
                int say = a_say + b_say;
                if (a_act == say && b_act != say) {
                    b_drink++;
                } else if (a_act != say && b_act == say) {
                    a_drink++;
                }
            }
        }

        printf("%d %d\n", a_drink, b_drink);
    }

    return 0;
}
