class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        sum,freq=0,collections.Counter(chars)
        
        for i in words:
            freq1=collections.Counter(i)
            b=0
            for j in freq1:
                if freq1[j] > freq[j]:
                    b=1
                    break
            if b==0:
                sum+=len(i);
                
        return sum
                    