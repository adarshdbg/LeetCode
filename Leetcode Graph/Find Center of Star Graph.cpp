static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int a=0,b=0;
        for(int i=0;i<2;i++)
        {
            if(i==1)
            {
                if(a==edges[i][0] || a==edges[i][1])
                    return a;
                if(b==edges[i][0] || b==edges[i][1])
                    return b;
            }
            a=edges[i][0];
            b=edges[i][1];
            
        }
        
        return 0;
    }
};