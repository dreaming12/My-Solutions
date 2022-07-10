# 字符串

### 反转字符串

```python
def reverseString(self, s: List[str]) -> None:
    """
    Do not return anything, modify s in-place instead.
    """
    s[:] = reversed(s)
```

### 整数反转

```python
def reverse(self, x: int) -> int:
    flag = 1 if x > 0 else -1
    x = -x if x < 0 else x
    x = flag * int(''.join(reversed(list(str(x)))))
    if x > 2 ** 31 - 1 or x < -2 ** 31:
        x = 0
    return x
```

#### 字符串中的第一个唯一字符

```python
def firstUniqChar(self, s: str) -> int:
    flag = 1
    index = -1
    tmp = []

    for i in range(len(s)):
        for j in range(i + 1, len(s)):
            if s[i] == s[j]:
                flag = 0
                tmp.append(s[i])
                break
        if flag and s[i] not in tmp:
            index = i
            break
        flag = 1

    return index
```

```python
def firstUniqChar(self, s: str) -> int:
    dict = {}
    index = -1

    for c in s:
        if c not in dict:
            dict[c] = 1
        else:
            dict[c] = dict[c] + 1

    for key, value in dict.items():
        if value == 1:
            index = s.index(key)
            break

    return index
```

#### 有效的字母异位词

```python
def isAnagram(self, s: str, t: str) -> bool:
    flag = True

    s = sorted(list(s))
    t = sorted(list(t))

    if len(s) == len(t):
        for i in range(len(s)):
            if s[i] != t[i]:
                flag = False
                break
    else:
        flag = False

    return flag
```

#### 验证回文串

```python
def isPalindrome(self, s: str) -> bool:
    letters = 'abcdefghijklmnopqrstuvwxyz1234567890'

    s = s.lower()
    new_str = ''
    for ch in s:
        if ch in letters:
            new_str += ch
    

    if new_str == ''.join(reversed(list(new_str))):
        return True
    return False
```

#### 字符串转换整数 (atoi)

```python
class Solution:
    def myAtoi(self, s: str) -> int:
        str_num = ''
        s = s.strip()
        flag = False
        for i in range(len(s)):
            if s[i].isdigit():
                str_num += s[i]
                flag = True
            elif s[i] == '-' or s[i] == '+':
                if flag:
                    break
                str_num += s[i]
            else:
                break

        try:
            num = int(str_num)
        except ValueError:
            num = 0

        MIN = -2 ** 31
        MAX = -MIN - 1
        if num < MIN:
            num = MIN
        elif num > MAX:
            num = MAX

        return num


if __name__ == '__main__':
    str = "  words and 987"
    # str = "   -42"
    # str = "+-11"
    # str = "    -88827   5655  U"
    # str = "-5-"
    # str = "-13+8"

    s = Solution()
    print(s.myAtoi(str))
```

#### 实现 strStr()

```python
def strStr(self, haystack: str, needle: str) -> int:
    length = len(needle)
    index = -1
    for i in range(len(haystack)):
        if haystack[i] == needle[0]:
            if haystack[i:i + length] == needle:
                index = i
                break

    return index
```
