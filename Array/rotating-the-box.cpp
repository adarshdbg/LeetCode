class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int n=box.size(),m=box[0].size();
        vector<vector<char>>ans(m,vector<char>(n,'.'));
        
        for(int i=0;i<n;i++)
        {
            int p=0;
            for(int j=0;j<m;j++)
            {
                if(box[i][j]=='#')
                    p++;
                else if(box[i][j]=='.')
                    continue;
                else
                {
                    int t=1;
                    while(p--)
                    {
                        ans[j-t][n-i-1]='#';
                        t++;
                    }
                    ans[j][n-i-1]='*';
                    p=0;
                }
                
            }
            int t=1;
            while(p--)
            {
                ans[m-t][n-i-1]='#';
                t++;
            }
            
        }
        return ans;
    }
};