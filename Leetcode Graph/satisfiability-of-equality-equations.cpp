static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<int>>v;
    vector<int>color;
     vector<bool>visited;
    void dfs(int i,int c)
    {
        visited[i]=true;
        color[i]=c;
        for(auto &j:v[i])
        {
            if(!visited[j])
            dfs(j,c);
        }
    }
    bool equationsPossible(vector<string>& equations) {
       int n=equations.size();
        v.resize(26);
        visited.resize(26);
        color.resize(26);
        for(auto & i:equations)
        {
            if(i[1]=='=')
            {
            v[i[0]-'a'].push_back(i[3]-'a');
            v[i[3]-'a'].push_back(i[0]-'a');
            }
        }
        int c=0;
        for(int i=0;i<26;i++)
        {
            if(!visited[i])
                dfs(i,c);
            
            c++;
        }
        for(auto &i:equations)
        {
            if(i[1]=='!')
            {
                if(color[i[0] - 'a']==color[i[3] - 'a'])
                    return false;
            }
        }
        return true;
    }
};