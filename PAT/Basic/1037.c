/**
 * 1037 在霍格沃茨找零钱
 * （X）读入六个值 - 应付和实付的加隆相减 - 依次处理三种货币，不够向前借
 * 转化为价值最低的货币
 * 提交次数: 1
 * TIPS:
 *  - NULL
 */
#include <stdio.h>

int main(void) {
    int P_Galleon, P_Sickle, P_Knut;
    int A_Galleon, A_Sickle, A_Knut;
    int R_Galleon = 0, R_Sickle = 0, R_Knut = 0;

    while (scanf("%d.%d.%d %d.%d.%d",
                 &P_Galleon, &P_Sickle, &P_Knut,
                 &A_Galleon, &A_Sickle, &A_Knut) != EOF) {
        int P = (P_Galleon * 17 + P_Sickle) * 29 + P_Knut;
        int A = (A_Galleon * 17 + A_Sickle) * 29 + A_Knut;

        int R = A - P;
        int flag = 1;
        if (R < 0) {
            R = -R;
            flag = -1;
        }
        R_Knut = R % 29;
        R = R / 29;
        R_Sickle = R % 17;
        R_Galleon = flag * R / 17;

        printf("%d.%d.%d\n", R_Galleon, R_Sickle, R_Knut);
    }

    return 0;
}
