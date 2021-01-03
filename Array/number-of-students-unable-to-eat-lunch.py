class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        count=collections.Counter(students)
        
        k=0
        while k<len(students) and count[sandwiches[k]]:
            count[sandwiches[k]]-=1
            k+=1
            
        return len(students)-k
        