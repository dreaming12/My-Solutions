// 读完数字后，若要读取字符，需要将换行符清除
// LEN = len(str) + 1
#include <stdio.h>
#include <string.h>
#define ZM "10X98765432"
#define LEN 19

char id[LEN];
int weight[LEN] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};

int main(void) {
    int N;
    scanf("%d", &N);
    getchar();

    int flag = 1;
    for (int i = 0; i < N; i++) {
        fgets(id, LEN, stdin);
        getchar();

        int total = 0;
        for (int j = 0; j + 2 != LEN; j++) {
            if (id[j] == 'X') {
                total += 10 * weight[j];
            } else {
                total += (id[j] - '0') * weight[j];
            }
        }

        int check = total % 11;
        // printf("- %2d ", check);

        if (ZM[check] != id[LEN - 2]) {
            flag = 0;
            printf("%s\n", id);
        }
    }

    if (flag) {
        printf("All passed\n");
    }
            
    return 0;
}
