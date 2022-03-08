#include <stdio.h>

int sum_array(const int *values, size_t count) {
    int ans = 0;

    // while (count--) {}
    for (int i = 0; i < count; i++) {
        ans += *(values + i);
    }

    return ans;
}
