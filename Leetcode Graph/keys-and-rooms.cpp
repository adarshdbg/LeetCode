static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>p;
        set<int> s;
        vector<bool>f(n,false);
        for(int i=0;i<rooms[0].size();i++)
        {
             p.push_back(rooms[0][i]);
        }
        f[0]=true;
        s.insert(0);
        while(!p.empty())
        {
            vector<int> q;
            for(int i=0;i<p.size();i++)
            {
                if(!f[p[i]])
                {
                   // cout<<"1"<<" ";
                    f[p[i]]=true;
                    s.insert(p[i]);
                    for(int j=0;j<rooms[p[i]].size();j++)
                    {
                        if(!f[rooms[p[i]][j]])
                    q.push_back(rooms[p[i]][j]),s.insert(rooms[p[i]][j]);
                    }
                }
            }
            p=q;
        }
        if(s.size()==n)
            return true;
        else
            return false;
    }
};