from colorama import Fore, Style


class Solution:
    def pivotIndex(self, nums):
        for i in range(0, len(nums)):
            if sum(nums[:i]) == sum(nums[i + 1:]):
                return i

        return -1


def TEST(nums, ans):
    s = Solution()
    index = s.pivotIndex(nums)
    if index == ans:
        print(f"{Fore.GREEN}PASSED{Style.RESET_ALL}")


TEST([1, 7, 3, 6, 5, 6], 3)
TEST([1, 2, 3], -1)
TEST([2, 1, -1], 0)
TEST([1, -1, 2], 2)
TEST([-1, -1, -1, 1, 1, 1], -1)
