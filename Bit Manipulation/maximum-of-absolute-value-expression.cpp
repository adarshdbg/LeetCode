static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        vector<int>v={1,-1};
        int ans=INT_MIN;
        
        for(auto &i:v)
        {
            for(auto &j:v)
            {
                 for(auto &k:v)
                {
                     int p=INT_MAX,q=INT_MIN;
                    for(int l=0;l<arr1.size();l++)
                    {
                        p=min(p,i*arr1[l]+j*arr2[l]+k*l);
                        q=max(q,i*arr1[l]+j*arr2[l]+k*l);
                    }
                     ans=max(ans,q-p);
                }
            } 
        }
        return ans;
    }
};