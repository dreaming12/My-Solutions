class Solution:
    def numWays(self, n: int) -> int:
        if n == 0:
            return 1
        elif n <= 2:
            return n

        a = 1
        b = 2
        for i in range(3, n + 1):
            temp = (a + b) % 1000000007
            a = b
            b = temp

        return temp


def TEST(n: int) -> int:
    s = Solution()
    ans = s.numWays(n)
    print(ans)


TEST(2)  # 2
TEST(7)  # 21
TEST(0)  # 1
TEST(37)  # 39088169
