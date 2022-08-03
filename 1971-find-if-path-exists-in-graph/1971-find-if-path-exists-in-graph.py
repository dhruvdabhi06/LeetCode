

class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        G = defaultdict(list[int])
        for s , e in edges:
            G[s].append(e)
            G[e].append(s)
        q = deque([source])
        seen = set()
        while q:
            c = q.popleft()
            
            if c in seen:
                continue
            if c == destination:
                return True
            seen.add(c)
            for i in G[c]:
                q.append(i)
        return False