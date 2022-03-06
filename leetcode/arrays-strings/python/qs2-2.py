class Solution:
    def setZeroes(self, matrix: list) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        rows = []
        cols = []
        rlen = len(matrix)
        clen = len(matrix[0])

        for r in range(rlen):
            for c in range(clen):
                if matrix[r][c] == 0:
                    rows.append(r)
                    cols.append(c)

        for r in range(rlen):
            for c in range(clen):
                if r in rows or c in cols:
                    matrix[r][c] = 0

        print(rows, cols)
        return matrix

def TEST(matrix: list) -> None:
    s = Solution()
    res = s.setZeroes(matrix)
    print(res)


TEST(
    [
        [1, 1, 1],
        [1, 0, 1],
        [1, 1, 1]
    ]
)

TEST(
    [
        [0, 1, 2, 0],
        [3, 4, 5, 2],
        [1, 3, 1, 5]
    ]
)
