class Solution:
    def merge(self, intervals: list) -> list:
        intervals.sort()
        ls = []

        for interval in intervals:
            if len(ls) == 0 or interval[0] > ls[-1][-1]:
                ls.append(interval)
            elif ls[-1][-1] >= interval[0]:
                if interval[-1] > ls[-1][-1]:
                    ls[-1][-1] = interval[-1]
        return ls


def TEST(ls: list):
    s = Solution()
    ans = s.merge(ls)
    print(ans)


# [[1,6],[8,10],[15,18]]
TEST([[1, 3], [2, 6], [8, 10], [15, 18]])
# [[1,5]]
TEST([[1, 4], [4, 5]])
# [[1,6],[8,10],[15,18]]
TEST([[1,3],[2,6],[8,10],[15,18]])
# [[1,4]]
TEST([[1,4],[2,3]])
