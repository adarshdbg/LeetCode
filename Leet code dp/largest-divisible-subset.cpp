static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums;
        vector<int>ans;
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>b(n,1);
        vector<int>a(n);
        int p=1;
        for(int j=n-1;j>=0;j--)
        {
            a[j]=j;
            for(int i=j+1;i<n;i++)
            {
                if(nums[i]%nums[j]==0)
                {
                    if(b[i]>=b[j])
                    {
                        b[j]=b[i]+1;
                        a[j]=i;
                        p=max(p,b[j]);
                    }
                }
            }
        }
        //int i=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]==p)
            {
                ans.push_back(nums[i]);
                while(a[i]!=i)
                {
                    i=a[i];
                    ans.push_back(nums[i]);
                }
                break;
            }
        }
        return ans;
    }
};