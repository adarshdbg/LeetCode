static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker)     {
        vector<pair<int,int>>v;
        for(int i=0;i<profit.size();i++)
        {
            v.push_back({difficulty[i],profit[i]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<profit.size();i++)
        {
            difficulty[i]=v[i].first;
            profit[i]=v[i].second;
           // cout<<difficulty[i]<<" "<< profit[i]<<" ";
        }
        v.clear();
        int p=0;
        for(int i=0;i<profit.size();i++)
        {
            p=max(p,profit[i]);
            profit[i]=p;
        }
//         for(int i=0;i<profit.size();i++)
//         {
           
//            cout<<difficulty[i]<<" "<< profit[i]<<" ";
//         }
        int ans=0;
        for(auto &i:worker)
        {
           auto it=upper_bound(difficulty.begin(),difficulty.end(),i);
            if(it-difficulty.begin()-1 >=0)
           ans+=profit[it-difficulty.begin()-1];
        }
        return ans;
        
    }
};