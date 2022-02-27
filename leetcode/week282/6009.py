class Solution:
    def minSteps(self, s: str, t: str) -> int:
        d = {}

        for i in s:
            if i not in d:
                d[i] = 1
            else:
                d[i] += 1

        for i in t:
            if i not in d:
                d[i] = -1
            else:
                d[i] -= 1

        return sum(abs(i) for i in d.values())


s = Solution()

# str1 = "leetcode"
# str2 = "coats"

# str1 = "night"
# str2 = "thing"

str1 = "cotxazilut"
str2 = "nahrrmcchxwrieqqdwdpneitkxgnt"

len = s.minSteps(str1, str2)
print(len)
