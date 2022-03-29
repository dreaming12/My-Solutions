#include <stdio.h>
#include <string.h>
#define SIZE 1000000

char str[SIZE * 2];
char res[SIZE];

int main(void) {
    char ch;
    int index = 0;
    while ((ch = getchar()) != EOF) {
        str[index++] = ch;
    }

    int size = 0;
    for (int i = 0; i < index; i++) {
        int flag = 1;
        for (int j = 0; j < size; j++) {
            if (str[i] == res[j]) {
                flag = 0;
            }
        }
        if (flag && str[i] != '\n') {
            res[size++] = str[i];
        }
    }
    res[size] = '\0';

    printf("%s\n", res);

    return 0;
}

// timeout

// #include <stdio.h>
// #include <string.h>
// #define SIZE 1000000

// char str[SIZE * 2];

// void getstr(void) {
//     char ch;
//     int index = 0;
//     while ((ch = getchar()) != EOF) {
//         str[index++] = ch;
//     }
//     str[index] = '\0';
// }

// void duplicate(char *ar) {
//     while (*ar != '\0') {
//         char *first = strchr(ar, *ar);
//         char *last = strrchr(ar, *ar);
//         while (first != last && *first != '\n') {
//             *last = '\n';
//             last = strrchr(ar, *ar);
//         }
//         ar++;
//     }
// }

// void printstr(char *ar) {
//     while (*ar != '\0') {
//         if (*ar != '\n') {
//             putchar(*ar);
//         }
//         ar++;
//     }
// }

// int main(void) {
//     getstr();
//     duplicate(str);
//     printstr(str);
//     putchar('\n');

//     return 0;
// }
