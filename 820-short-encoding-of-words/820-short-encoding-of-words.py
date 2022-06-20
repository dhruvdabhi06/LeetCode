class Solution:
    def minimumLengthEncoding(self, words: List[str]) -> int:
        N = len(words)
        W = set(words)
        for w in words:
            M = len(w)
            for j in range(1,M):
                if (w[-j:]) in W:
                    W.remove(w[-j:])
        return len("#".join([w for w in W]) + "#")