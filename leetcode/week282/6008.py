class List:
    pass

class Solution:
    def prefixcnt(self, words: List[str], pref: str) -> int:
        cnt = 0
        for word in words:
            if word[:len(pref)] == pref:
                cnt = cnt + 1
        return cnt
