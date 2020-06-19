static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maximum(vector<int>&a,int l,int r)
    {
        int p=0,q=0;//p=robbed,q=not_robbed;
        
        for(int i=l;i<r;i++)
        {
            int temp=p;
            p=max(q+a[i],p);
            q=max(temp,q);
        }
        return max(p,q);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        return max(maximum(nums,0,nums.size()-1),maximum(nums,1,nums.size()));
    }
};