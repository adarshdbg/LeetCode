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
    int countArrangement(int N) {
        vector<int>v;
        v.push_back(0);
        
        vector<bool>vis(N+1,false);
        all(v,vis);
        return ans;
        
    }
    void all(vector<int>&v,vector<bool>&vis)
    {
       if(v.size()==vis.size())
       {
           ans++;
           return;
       }
        int l=v.size();
        for(int i=1;i<vis.size();i++)
        {
            if((l%i==0 || i%l==0) && !vis[i])
            {
                vis[i]=true;
                v.push_back(i);
                all(v,vis);
                vis[i]=false;
                v.pop_back();
            }
        }
    }
};