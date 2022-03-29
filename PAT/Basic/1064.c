#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000

int res[SIZE];

int friend_card_id(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num = num / 10;
    }

    return sum;
}

int is_in_result(int ar[], int size, int id) {
    int flag = 0;

    for (int i = 0; i < size; i++) {
        if (ar[i] == id) {
            flag = 1;
            break;
        }
    }

    return flag;
}

// 从小到大
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// 如果是 double 类型
// 如果两个数接近，返回的数的绝对值可能小于 1，函数返回值可能为 0，无法准确排序
// int compare(const void *a, const void *b) {
//     return (*(double *)a > *(double *)b ? 1 : -1);
// }

int main(void) {
    int n;
    int num;
    int index = 0;

    scanf("%d", &n);
    while (n--) {
        scanf("%d", &num);
        int id = friend_card_id(num);
        int flag = is_in_result(res, index, id);
        if (!flag) {
            res[index++] = id;
        }
    }

    printf("%d\n", index);
    qsort(res, index, sizeof(int), compare);
    for (int i = 0; i < index; i++) {
        if (i == index - 1) {
            printf("%d\n", res[i]);
        } else {
            printf("%d ", res[i]);
        }
    }

    return 0;
}
