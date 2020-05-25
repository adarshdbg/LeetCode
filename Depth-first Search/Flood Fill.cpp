static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    void color(vector<vector<int>>&a,int l,int r,int p,int q)
    {
        
        if(a.size()>l && l>=0 && r>=0 && r<a[0].size())
        {
            if(a[l][r]==p)
            {
                a[l][r]=q;
                color(a,l+1,r,p,q);
                color(a,l,r+1,p,q);
                color(a,l,r-1,p,q);
                color(a,l-1,r,p,q);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int p=image[sr][sc];
        int q=newColor;
        if(p==q)
            return image;
        color(image,sr,sc,p,q);
        return image;
        
    }
};