static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        if(nums.size() < 3) 
            return 0;
        sort(nums.begin(),nums.end());
        long long int p=INT_MAX;
        for(int i=0;i<n-2;i++)
        {
            int l=i+1,r=n-1;
            
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==target)
                    return sum;
                if(abs(sum-target)<abs(p - target))
                    p=sum;
                if(sum>target)
                {
                    r--;
                }
                else
                    l++;
            }
            
        }
        return p;
    }
};