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
        int sum=0,l=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i])
                sum++;
            else
                sum--;
            
            if(m.find(sum)!=m.end())
                l=max(l,i-m[sum]);
            else
                m[sum]=i;
        }
        return l;
    }
};