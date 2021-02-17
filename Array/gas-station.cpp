class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0,tank=0;
        int ans=0;
        for(int i=0;i<gas.size();i++)
        {
            sum+= gas[i]-cost[i];
            tank+=gas[i]-cost[i];
            
            
            if(tank<0)
            {
                ans=i+1;
                tank=0;
            }
            
            
        }
        
        return sum<0?-1:ans;
    }
};