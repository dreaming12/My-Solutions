#include <assert.h>
#include <stdio.h>

/**
 * 首先假设中心下标为 0，分别计算下标左右两侧的值。若两侧值不同，下标值 +1。
 */
int pivot_index(int *nums, int numsSize) {
    int center = 0;
    while (center < numsSize) {
        int sum_left = 0;
        int sum_right = 0;
        for (int i = 0; i < center; i++) {
            sum_left += *(nums + i);
        }
        for (int i = center + 1; i < numsSize; i++) {
            sum_right += *(nums + i);
        }
        if (sum_left == sum_right) {
            break;
        }
        center++;
    }
    if (center == numsSize) {
        center = -1;
    }
    return center;
}

int main(void) {
    int a[] = {1, 7, 3, 6, 5, 6};
    int res = pivot_index(a, sizeof(a) / sizeof(a[0]));
    assert(res == 3);

    int b[] = {1, 2, 3};
    res = pivot_index(b, sizeof(b) / sizeof(b[0]));
    assert(res == -1);

    int c[] = {1, -1, 2};
    res = pivot_index(c, sizeof(c) / sizeof(c[0]));
    assert(res == 2);

    printf("PASSED\n");

    return 0;
}
