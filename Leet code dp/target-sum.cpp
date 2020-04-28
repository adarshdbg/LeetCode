class Solution {
public:
    int count=0;
    int findTargetSumWays(vector<int>& nums, int S) {
        //int count=
         sum1(nums,0,0,S);
        return count;
    }
   void sum1(vector<int> n,int i,int sum,int S)
    {
        
        if(i==n.size())
        {
        if(S==sum)
            count++;
        }
        else
        {
           sum1(n,i+1,sum-n[i],S);
           sum1(n,i+1,sum+n[i],S);
        }
       // return count;
    }
};