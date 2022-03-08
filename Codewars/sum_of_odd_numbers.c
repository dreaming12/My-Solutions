// TODO
// can not pass the should_pass_tests_with_random_data
// Max Buffer Size Reached
#include <inttypes.h>
#include <stdio.h>

uint64_t rowSumOddNumbers(uint32_t n) {
    int end = (1 + n) * n / 2;
    int start = end - n + 1;
    int num = 1;

    if (start == end) {
        return num;
    }

    num = num + (start - 1) * 2;
    int begin = num;
    int size = end - start + 1;
    for (int i = 0; i < size; i++, num += 2) {
        if (i == 0) {
            printf("%d", num);
        } else {
            printf(" + %d", num);
        }
    }
    int sum = (begin + size - 1) * size;
    printf(" = %d\n", sum);

    return sum;
}
