# 数学

### Fizz Buzz

```python
def fizzBuzz(self, n: int) -> List[str]:
    lst = []

    for i in range(1, n + 1):
        a = i % 3
        b = i % 5
        if a and b:
            lst.append(str(i))
        elif a == 0 and b == 0:
            lst.append("FizzBuzz")
        elif a == 0:
            lst.append("Fizz")
        elif b == 0:
            lst.append("Buzz")

    return lst
```

### 计数质数

```python
# 超时

def countPrimes(self, n: int) -> int:
    isprime = [0]
    isprime += [1 for _ in range(n - 2)]

    for i in range(2, int(sqrt(n)) + 1):
        for j in range(2, n // i + 1):
            if i * j - 1 < n - 1:
                isprime[i * j - 1] = 0

    counter = 0
    for i in range(len(isprime)):
        if isprime[i] == 1:
            counter += 1
            print(i + 1)

    return counter
```
