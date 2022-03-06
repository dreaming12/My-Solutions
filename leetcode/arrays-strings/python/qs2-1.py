class Solution:
    def rotate(self, matrix: list) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        n = len(matrix)

        for c in range(n):
            for r in range(c):
                matrix[c][r], matrix[r][c] = matrix[r][c], matrix[c][r]

        for c in range(n // 2):
            for r in range(n):
                matrix[r][c], matrix[r][n - c -
                                        1] = matrix[r][n - c - 1], matrix[r][c]

        return matrix


def TEST(matrix: list) -> None:
    s = Solution()
    res = s.rotate(matrix)
    print(res)


# [
#   [7,4,1],
#   [8,5,2],
#   [9,6,3]
# ]
TEST(
    [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]
)

# [
#   [15,13, 2, 5],
#   [14, 3, 4, 1],
#   [12, 6, 8, 9],
#   [16, 7,10,11]
# ]
TEST(
    [
        [5, 1, 9, 11],
        [2, 4, 8, 10],
        [13, 3, 6, 7],
        [15, 14, 12, 16]
    ]
)
