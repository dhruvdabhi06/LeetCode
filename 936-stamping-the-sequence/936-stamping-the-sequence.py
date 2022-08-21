class Solution:
    def movesToStamp(self, stamp: str, target: str) -> List[int]:
        M,N = len(stamp), len(target)
        move, maxmove = 0 , 10*N
        output = []
        premove = 0
        def check(src, target):
            works = False
            for i in range(M):
                if src[i] == target[i]:
                    works = True
                elif src[i] == '?':
                    continue
                else:
                    return False
            return works
        
        while move < maxmove :
            premove = move
            for i in range(N-M+1):
                if(check(target[i:i+M], stamp)):
                    move += 1
                    output.append(i)
                    target = target[:i] + "?"*M + target[i+M:]
                    if target == "?"*N:
                        return reversed(output)
            if premove == move:
                return []
            
            
                    
                    