class Solution:
    def deckRevealedIncreasing(self, deck: List[int]) -> List[int]:
        deck.sort()
        n=len(deck)
        index=collections.deque(range(n))
        ans=[None]*n
        
        for card in deck:
            ans[index.popleft()]=card
            if index:
                index.append(index.popleft())
                
        return ans