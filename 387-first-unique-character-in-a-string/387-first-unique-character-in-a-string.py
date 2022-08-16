class Solution:
    def firstUniqChar(self, s: str) -> int:
        frequency = Counter(s)
        for i in s:
            if frequency[i] == 1:
                return s.index(i);
        
        return -1