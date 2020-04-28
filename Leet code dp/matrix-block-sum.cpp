class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
       
        int n=mat.size();
        //cout<<n<<" "<<endl;
        int m=mat[0].size();
        int pre[n+1][m+1]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                pre[i+1][j+1]=mat[i][j]+pre[i][j+1]+pre[i+1][j]-pre[i][j];
            }
        }
        
        vector<vector<int>> ans(n, vector<int> (m, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int r1=max(0,i-k);
                int c1=max(0,j-k);
                int r2=min(n-1,i+k);
                int c2=min(m-1,j+k);
            ans[i][j]=pre[r2+1][c2+1] - pre[r1][c2+1] - pre[r2+1][c1] + pre[r1][c1];
            }
        }
        return ans;
        
    }
};