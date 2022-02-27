# :zap: 剑指 Offer

### 10 Ⅱ

```py
# 递归，会超时或内存不够
class Solution:
    def numWays(self, n: int) -> int:
        if n <= 1:
            return 1
        elif n == 2:
            return 2
        else:
            return self.numWays(n - 1) + self.numWays(n - 2)

# 优化 -> TIME OUT
class Solution:
    def numWays(self, n: int) -> int:
        d = {}

        if n == 0:
            return 1
        elif n <= 2:
            return n

        if d.get(n):
            return d.get(n)
        else:
            d[n] = (self.numWays(n - 1) + self.numWays(n - 2)) % 1000000007
            return d.get(n)
```
