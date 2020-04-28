static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0)
            return 0;
        sort(nums.begin(),nums.end());
        int i=0,j=1;
        int n=nums.size();
        map<pair<int,int>,int>m;
        int ans=0;
        
        while(i<n && j<n)
        {
            if(nums[i]+k == nums[j] && i!=j)
            {
                m[{nums[i],nums[j]}];
                i++;
                j++;
            }
            else if(nums[i]+k < nums[j])
            {
                i++;
            }
            else
                j++;
        }
        return m.size();
    }
};