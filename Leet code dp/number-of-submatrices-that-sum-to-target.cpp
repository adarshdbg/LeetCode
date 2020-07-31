static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int ans=0;
    unordered_map<int,int>m;
    void target_sum(vector<int>&a,int target)
    {
        int sum=0;
        m.clear();
        m[0]++;
        
        for(auto &i:a)
        {
            sum+=i;
            ans+=m[sum-target];
            m[sum]++;
        }
    }
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size();
        int m=matrix.size();
        vector<int>a(n);
        for(int i=0;i<m;i++)
        {
            fill(a.begin(),a.end(),0);
            for(int j=i;j<m;j++)
            {
                for(int k=0;k<n;k++)
                {
                    a[k]+=matrix[j][k];
                }
                target_sum(a,target);
            }
        }
         return ans;
    }
   
};