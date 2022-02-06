/**
 * 1009 说反话
 * 提交次数: 5
 * TIPS:
 *  - 注意输出末尾是否有空格和换行符
 *  - 测试点 3，只有一个单词的时候注意换行
 */
#include <stdio.h>
#include <string.h>
#define SIZE 81

char str[SIZE];
char *p = str;
int pos[SIZE];

int main(void) {
    while (fgets(p, SIZE, stdin)) {
        int i = 0, index = 0;
        for (; str[i] != '\0'; i++) {
            if (str[i] == ' ') {
                pos[index] = i;
                index++;
            }
        }
        pos[index] = i;

        for (int j = index; j >= 0; j--) {
            for (int k = pos[j - 1]; k < pos[j]; k++) {
                if (str[k] == ' ' || str[k] == '\n') {
                    continue;
                } else {
                    printf("%c", str[k]);
                }
            }

            if (j != 0) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}
