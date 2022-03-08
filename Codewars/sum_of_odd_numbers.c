// 不用打印计算的式子
// 注意数据类型
#include <inttypes.h>
#include <stdio.h>

uint64_t rowSumOddNumbers(uint32_t n);

int main(void) {
    printf("%zu\n", rowSumOddNumbers(570124));
}

uint64_t rowSumOddNumbers(uint32_t n) {
    uint64_t end = (1 + (uint64_t)n) * (uint64_t)n / 2;
    uint64_t start = end - (uint64_t)n + 1;
    uint64_t begin = 1;
    // printf("%zu %zu %zu\n", start, end, end - start + 1);

    if (start == end) {
        return begin;
    }

    begin = begin + (start - 1) * 2;
    // printf("%zu\n", begin);
    uint64_t size = end - start + 1;
    uint64_t sum = (begin + size - 1) * size;

    return sum;
}

// interesting things ...
uint64_t rowSumOddNumbers(uint32_t n)
{
    // (n*n) is center number of each line, visible odd or invisible even
    return (uint64_t) n * n * n;
}
