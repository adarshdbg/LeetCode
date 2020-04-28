static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>m;
        m[0]=-1;
        int as=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                sum=sum-1;
            if(nums[i]==0)
                sum=sum+1;
            
            //sum=sum+nums[i];
            if(m.find(sum)!=m.end())
            {
                as=max(as,i-m[sum]);
            }
            else
                m[sum]=i;
        }
        return as;
    }
};