class Solution:
    def cellsInRange(self, s: str) -> list:
        start = s.split(":")[0]
        end = s.split(":")[-1]
        ls = []

        for i in range(ord(start[:1]), ord(end[:1]) + 1):
            for j in range(eval(start[1:]), eval(end[1:]) + 1):
                ls.append(chr(i) + str(j))

        return ls


def TEST(string: str) -> None:
    s = Solution()
    res = s.cellsInRange(string)
    print(res)


TEST("K1:L2")
TEST("A1:F1")
TEST("U7:X9")
