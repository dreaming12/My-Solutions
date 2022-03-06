class Solution:
    def findDiagonalOrder(self, mat: list) -> list:
        rlen = len(mat)
        clen = len(mat[0])
        ls = []

        for r in range(rlen):
            for c in range(clen):
                print(mat[r][c])
        # TODO

        return ls


def TEST(mat: list) -> None:
    s = Solution()
    res = s.findDiagonalOrder(mat)
    print(res)


TEST([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
TEST([[1, 2], [3, 4]])
