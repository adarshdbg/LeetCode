static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int j=0,ans=0;
        vector<int>v;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==1)
                v.push_back(i);
        }
        j=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2 == 1)
                k--; 
            if(k==0)
            {
                if(j==0)
                count=v[j]+1; 
                else
                  count=v[j]-v[j-1];  
            }
            if(k<0)
            {
                count=0;
                k++;
                j++;
                count=count+v[j]-v[j-1];
            }
            ans=ans+count;
        }
        return ans;
    }
};