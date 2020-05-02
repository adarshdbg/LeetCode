static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int totalFruit(vector<int>& tree) {
        int n=tree.size();
        int j=0,i=0,res=INT_MIN;
        unordered_map<int,int>m;
        for( i=0;i<n;i++)
        {
            m[tree[i]]++;
            while(j<n && m.size()>2)
            {
                res=max(res,i-j);
                m[tree[j]]--;
                if(m[tree[j]]==0)
                    m.erase(tree[j]);
                j++;
            }
            
        }
         res = max(res, i-j);
        return res == INT_MIN ? (m.size() > 0 ? n : 0) : res;
        
    }
};