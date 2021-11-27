static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        int n=nums.size();
        
        string ans;
        
        for(int i=0;i<n;i++)
        {
            if(i>0)
                ans+="/";
            
            if(i==1 && n>2)
                ans+="(";
            
            ans+=to_string(nums[i]);
            
            if(i==n-1 && n>2)
                ans+=")";
        }
        return ans;
    }
};