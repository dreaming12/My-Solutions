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
