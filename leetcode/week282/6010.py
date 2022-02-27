class List:
    pass


class Solution:
    def minimumTime(self, time, totalTrips: int) -> int:
        mint = 1
        maxt = max(time) * totalTrips

        while mint <= maxt:
            mid = (mint + maxt) // 2
            total = sum(mid // i for i in time)

            if total >= totalTrips:
                maxt = mid - 1
            elif total < totalTrips:
                mint = mid + 1

        return mint


def TEST(time, total):
    s = Solution()
    time = s.minimumTime(time, total)
    print(time)


TEST([1, 2, 3], 5)  # 3
TEST([5, 10, 10], 9)  # 25
TEST([9, 3, 10, 5], 2)  # 5
