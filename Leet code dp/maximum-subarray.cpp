class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //int sum,j;
        int n=nums.size();
        int sum=0,sum1=INT_MIN;
        for(int i=0;i<n;i++)
        {
                sum+=nums[i];
            if(sum>sum1)
            {
                sum1=sum;
            }
            if(sum<0)
                sum=0;
        }
        return sum1;
    }
};