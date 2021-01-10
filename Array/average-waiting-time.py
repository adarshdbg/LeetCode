class Solution:
    def averageWaitingTime(self, customers: List[List[int]]) -> float:
        sum=0
        chef=0
        for i in range(len(customers)):
            if chef<=customers[i][0]:
                chef=customers[i][0]+customers[i][1]
                sum+=customers[i][1]
            elif chef>customers[i][0]:
                sum+=(chef-customers[i][0] + customers[i][1])
                chef=chef+customers[i][1]
        
        return sum/len(customers)