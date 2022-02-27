# :zap: 282 周赛

### 6008

EZ

### 6009

:bulb:

使用交并补来解决，但是不能使用集合，因为可能包含重复的字符

```py
class Solution:
    def minSteps(self, s: str, t: str) -> int:
        mp1 = Counter(s)
        mp2 = Counter(t)

        mp3 = (mp1 | mp2) - (mp1 & mp2)   # 并集减去交集

        return sum(mp3.values())
```

[source](https://leetcode-cn.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii/solution/python-countertong-ji-4-xing-by-juicie-acp7/)

:bulb:
```py
# TIME OUT
class Solution:
    def minSteps(self, s: str, t: str) -> int:
        cnt = 0

        for i in range(0, len(s)):
            for j in range(0, len(t)):
                if s[i] == t[j]:
                    s = s[:i] + '#' + s[i + 1:]
                    t = t[:j] + '#' + t[j + 1:]

        for i in s:
            if i != '#':
                cnt += 1
        for i in t:
            if i != '#':
                cnt += 1

        return cnt
```

:bulb:

1. 创建一个字典用于统计字母出现的次数
2. 遍历第一个字符串，若字符不在字典中，添加进去，并将值设为 1；若字符存在，将值 +1
3. 遍历第二个字符串，字符不存在时，**添加后将值设为 -1；若存在，将值 -1**
4. 返回字典中**值的绝对值**的和

[code](../week282/6009.py)

### 6910

:bulb:

```py
# TIME OUT
class Solution:
    def minimumTime(self, time: List[int], totalTrips: int) -> int:
        now = 0
        total = 0
        
        while total < totalTrips:
            total = 0
            now += 1
            
            for i in time:
                total += now // i
                
        return now
```

:bulb:

使用二分法（时间）

- :warning: 注意最大时间
- :warning: 可能一段时间内都可以完成对应的趟数，注意找耗时最少的一趟

```py
# 这样是不行的
if total == totalTrip:
    break
```

[code](../week282/6010.py)

### 6911


