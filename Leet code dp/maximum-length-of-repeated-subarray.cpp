class Solution {
public:
    int findLength(vector<int>& a, vector<int>& b) {
        int n=a.size(),ans=0;
        int v[n+1][n+1];
        memset(v,0,sizeof(v));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i]==b[j])
                {
                    v[i+1][j+1]=v[i][j]+1;
                    ans=max(ans,v[i+1][j+1]);
                }
                    
            }       
        }
        
        return ans;
    }
};