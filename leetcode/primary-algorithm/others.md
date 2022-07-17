# 其他

### 杨辉三角

```python
def generate(self, numRows: int) -> List[List[int]]:
    res = [[1]]

    for i in range(1, numRows):
        layer = [1]
        for j in range(i - 1):
            layer.append(res[i - 1][j] + res[i - 1][j + 1])
        layer.append(1)
        res.append(layer)

    return res
```

### 有效的括号

```python
def isValid(self, s: str) -> bool:
    box = []
    flag = True
    dict = {'(': ')', '[': ']', '{': '}'}

    for i in range(len(s)):
        if s[i] in dict.keys():
            box.append(s[i])
        elif len(box) and s[i] == dict[box[-1]]:
            box.pop()
        else:
            flag = False
            break

    if len(box):
        flag = False

    return flag
```

### 缺失数字

```python
def missingNumber(self, nums: List[int]) -> int:
    all = [i for i in range(len(nums) + 1)]
    return list(set(all) - set(nums))[0]
```
