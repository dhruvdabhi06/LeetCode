class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        tmp=[first]
        for i in encoded:
            s=tmp[-1] ^ i
            tmp.append(s)
        return tmp