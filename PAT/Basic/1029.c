#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define SIZE 100

char str[SIZE];
char output[SIZE];
char res[SIZE];

void convert_to_upper(char *str) {
    while (*str) {
        if (isalpha(*str)) {
            *str = toupper(*str);
        }
        str++;
    }
}

int main(void) {
    fgets(str, SIZE, stdin);
    fgets(output, SIZE, stdin);

    convert_to_upper(str);
    convert_to_upper(output);

    int index = 0;
    int i = 0, j = 0;
    int flag = 0;
    while (str[i] != '\n') {
        if (str[i] != output[j]) {
            for (int k = 0; k < index; k++) {
                if (str[i] == res[k]) {
                    flag = 1;
                }
            }
            if (!flag) {
                res[index++] = str[i];
            }
            flag = 0;
            i++;
        } else {
            i++;
            j++;
        }
    }

    for (int m = 0; m < index; m++) {
        putchar(res[m]);
    }
    putchar('\n');

    return 0;
}
