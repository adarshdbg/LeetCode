static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int>v;
    int makeConnected(int n, vector<vector<int>>& connections) {
        v.resize(n);
         v.assign(n,-1);
        int p=n,q=0;
        for(auto i:connections)
        {
            int l=parent(i[0]);
            int r=parent(i[1]);
            
            if(l!=r)
            {
                v[l]=r;
                p--;
            }
            else
                q++;
        }
        return q>=p-1?p-1:-1;
    }
    int parent(int i)
    {
        if(i!=v[i])
        {
            return v[i]==-1?i:parent(v[i]);
        }
        return i;
    }
};