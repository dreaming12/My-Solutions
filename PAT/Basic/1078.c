// 注意数组大小。。。
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define SIZE 1005

char str[SIZE];

void my_print(int times, char ch) {
    if (times == 1) {
        printf("%c", ch);
    } else {
        printf("%d%c", times, ch);
    }
}

void zip(char *str) {
    char prev = '\n';
    int times = 1;
    while (*str != '\n') {
        char ch = *str;
        if (ch == prev) {
            times++;
        } else if (ch != prev && prev != '\n') {
            my_print(times, prev);
            times = 1;
        }
        prev = ch;
        str++;
    }
    my_print(times, prev);
    putchar('\n');
}

void unzip(char *str) {
    char ch;
    int times = -1;
    while (*str != '\n') {
        if (isdigit(*str)) {
            if (times != -1) {
                times = times * 10 + *str - '0';
            } else {
                times = *str - '0';
            }
        }
        if (isalpha(*str) || isspace(*str)) {
            ch = *str;
            if (times == -1) {
                times = 1;
            }
            for (int i = 0; i < times; i++) {
                putchar(ch);
            }
            times = -1;
        }
        str++;
    }
    putchar('\n');
}

int main(void) {
    char mode;
    scanf("%c", &mode);
    getchar();
    // printf("%c\n", mode);
    fgets(str, SIZE, stdin);
    // printf("'%s'", str);

    if (mode == 'C') {
        zip(str);
    } else {
        unzip(str);
    }

    return 0;
}
