#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define SIZE 100001  // 注意

char str[SIZE];

int main(void) {
    fgets(str, SIZE, stdin);

    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            sum += str[i] - 'a' + 1;
        } else if (isupper(str[i])) {
            sum += str[i] - 'A' + 1;
        }
    }

    // printf("- %d\n", sum);

    int zero = 0, one = 0;
    while (sum > 0) {
        int digit = sum % 2;
        if (digit == 0) {
            zero++;
        } else {
            one++;
        }
        sum = sum / 2;
        printf("> %d\n", digit);
    }

    printf("%d %d\n", zero, one);

    return 0;
}
