from typing import List, Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def spiralMatrix(self, m: int, n: int, head: Optional[ListNode]) -> List[List[int]]:
        lst = []

        for i in range(m):
            lst.append([])
            for _ in range(n):
                lst[i].append(-1)

        top = m
        direction = 1
        index = 0
        level = 0
        for i in range(len(head)):
            if top == m:
                if direction == 1:
                    if index < top:
                        lst[level][index] = head[i]
                        index += direction
                    else:
                        top = n
                        level += 1
                        m -= 1
                elif direction == -1 and index > 0:
                    pass
            if top == n:
                if direction == 1:
                    if index < top:
                        lst[level][index] = head[i]
                        level += direction
                    else:
                        top = m
                        n -= 1

        return lst


if __name__ == '__main__':
    m = 3
    n = 5
    head = [3, 0, 2, 6, 8, 1, 7, 9, 4, 2, 5, 5, 0]

    s = Solution()
    print(s.spiralMatrix(m, n, head))
