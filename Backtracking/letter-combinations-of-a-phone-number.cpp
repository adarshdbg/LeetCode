static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<string>ans;
    string p;
    vector<string> letterCombinations(string digits) {
        vector<vector<char>>v(10);
        v[2]={'a','b','c'};
        v[3]={'d','e','f'};
        v[4]={'g','h','i'};
        v[5]={'j','k','l'};
        v[6]={'m','n','o'};
        v[7]={'p','q','r','s'};
        v[8]={'t','u','v'};
        v[9]={'w','x','y','z'};
              
        if(digits.size()==0)
            return{};
            dfs(v,digits,0,0);
        return ans;
    }
    
        void dfs(vector<vector<char>>&v,string s,int i,int j)
        {
            if(s.size()==p.size())
            {
                ans.push_back(p);
                return ;
            }

            for(int k=j;k<v[s[i]-'0'].size();k++)
            {
                p.push_back(v[s[i]-'0'][k]);
                dfs(v,s,i+1,j);
                p.pop_back();
            }
           
        }
};