class Solution:
    def findKDistantIndices(self, nums: list, key: int, k: int) -> list:
        keys = []
        ls = []

        for i in range(0, len(nums)):
            if nums[i] == key:
                keys.append(i)
        # print(keys)

        for i in range(0, len(nums)):
            for j in keys:
                if abs(i - j) <= k:
                    ls.append(i)
        
        return list(set(ls))


def TEST(nums: list, key: int, k: int) -> None:
    s = Solution()
    res = s.findKDistantIndices(nums, key, k);
    print(res)


TEST([3,4,9,1,3,9,5], 9, 1)
TEST([2,2,2,2,2], 2, 2)
