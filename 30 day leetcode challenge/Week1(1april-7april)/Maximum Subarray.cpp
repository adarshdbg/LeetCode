class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int p=INT_MIN,i=0,ans=0;
        while(i<n)
        {
            ans=ans+nums[i];
            if(ans>p)
                p=max(ans,p);
            if(ans<0)
                ans=0;
            i++;
        }
        return p;
    }
};