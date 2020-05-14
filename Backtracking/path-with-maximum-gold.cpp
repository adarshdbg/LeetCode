static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int findtotal(vector<vector<int>>&v,int i,int j)
    {
        if(i<0 || i>=v.size() || j<0 || j>=v[0].size() || v[i][j]<=0)
            return 0;
            
      v[i][j]=-v[i][j];
    auto p=max({findtotal(v,i+1,j),findtotal(v,i,j+1),findtotal(v,i-1,j),findtotal(v,i,j-1)});
        
        v[i][j]=-v[i][j];
        return p+v[i][j];
        
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans=INT_MIN;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                
                if(grid[i][j]>0)
                {
                    vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size(),false));
                    ans=max(ans,findtotal(grid,i,j));  
                }
            }
        }
        return ans;
    }
};