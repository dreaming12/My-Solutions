class Solution:
    def searchInsert(self, nums, target):
        mini = 0
        maxi = len(nums) - 1

        while mini <= maxi:
            mid = (mini + maxi) // 2

            if nums[mid] >= target:
                maxi = mid - 1
            elif nums[mid] < target:
                mini = mid + 1

        return mini


def TEST(nums, target, ans):
    s = Solution()
    index = s.searchInsert(nums, target)
    if index == ans:
        print("PASSED")


TEST([1, 3, 5, 6], 5, 2)
TEST([1, 3, 5, 6], 2, 1)
TEST([1, 3, 5, 6], 7, 4)
TEST([1, 3, 5, 6], 0, 0)
TEST([1], 0, 0)
