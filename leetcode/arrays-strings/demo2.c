#include <assert.h>
#include <stdio.h>

/**
 * 按顺序遍历
 */
// int searchInsert(int* nums, int numsSize, int target) {
//     int pos = numsSize;
//     for (int i = 0; i < numsSize; i++) {
//         if (nums[i] >= target) {
//             pos = i;
//             break;
//         }
//     }
//     return pos;
// }

/**
 * 二分查找
 */
int searchInsert(int* nums, int numsSize, int target) {
    int start = 0;
    int end = numsSize - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return start;
}

int main(void) {
    int a[] = {1, 3, 5, 6};
    int size = sizeof(a) / sizeof(a[0]);
    assert(searchInsert(a, size, 5) == 2);
    assert(searchInsert(a, size, 2) == 1);
    assert(searchInsert(a, size, 7) == 4);
    assert(searchInsert(a, size, 0) == 0);

    int b[] = {1};
    assert(searchInsert(b, sizeof(b) / sizeof(b[0]), 0) == 0);

    printf("PASSED\n");

    return 0;
}
