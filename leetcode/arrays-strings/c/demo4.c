#include <assert.h>
#include <stdio.h>
#define SIZEA 3
#define SIZEB 4

/**
 * 对换两次，沿主对角线和中轴线
 */
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    // TODO
    for (int i = 0; i < matrixSize; i++) {
        for (int j = i; j < *matrixColSize; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for (int i = 0; i < *matrixColSize / 2; i++) {
        for (int j = 0; j < matrixSize; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[*matrixColSize - i][j];
            matrix[*matrixColSize - i][j] = temp;
        }
    }
}

void test(int** matrix, int** rotate, int level) {
    for (int i = 0, m = 0; i < level; i++, m++) {
        for (int j = 0, n = 0; j < level; j++, n++) {
            assert(matrix[i][j] == rotate[m][n]);
        }
    }
}

int main(void) {
    // int a[][SIZEA] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}};
    // int rotate_a[][SIZEA] = {
    //     {7, 4, 1},
    //     {8, 5, 2},
    //     {9, 6, 3}};

    // int b[][4] = {
    //     {5, 1, 9, 11},
    //     {2, 4, 8, 10},
    //     {13, 3, 6, 7},
    //     {15, 14, 12, 16}};
    // int rotate_b[][4] = {
    //     {15, 13, 2, 5},
    //     {14, 3, 4, 1},
    //     {12, 6, 8, 9},
    //     {16, 7, 10, 11}};

    return 0;
}
