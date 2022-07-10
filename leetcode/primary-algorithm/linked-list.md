# 链表

```python
# Definition for singly-linked list.

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
```

### 删除链表中的节点

```python
def deleteNode(self, node: ListNode) -> None:
    """
    :type node: ListNode
    :rtype: void Do not return anything, modify node in-place instead.
    """
    node.val = node.next.val
    node.next = node.next.next
```

### 删除链表的倒数第N个节点

```python
def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
    length = 0
    ptr = head
    while ptr:
        length += 1
        ptr = ptr.next

    if length == n:
        return head.next

    ptr = head
    for _ in range(1, length - n):
        ptr = ptr.next
    if ptr.next != None:
        ptr.next = ptr.next.next
    else:
        head = ptr.next

    return head
```

### 反转链表

```python
def reverseList(self, head: ListNode) -> ListNode:
    ptr = head
    val = []
    while ptr:
        val.append(ptr.val)
        ptr = ptr.next

    ptr = head
    while ptr:
        ptr.val = val.pop()
        ptr = ptr.next

    return head
```

### 合并两个有序链表

```python
def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
    ptr1 = list1
    ptr2 = list2
    head = ListNode()
    ptr = head
    while ptr1 and ptr2:
        if ptr1.val > ptr2.val:
            ptr.next = ptr2
            ptr2 = ptr2.next
        else:
            ptr.next = ptr1
            ptr1 = ptr1.next
        ptr = ptr.next

    if ptr1 == None:
        ptr.next = ptr2
    else:
        ptr.next = ptr1

    return head.next
```

### 回文链表

```python
def isPalindrome(self, head: ListNode) -> bool:
    lst = []
    ptr = head
    while ptr:
        lst.append(ptr.val)
        ptr = ptr.next

    if lst == lst[::-1]:
        return True
    return False
```

求和，最后和为 0？
