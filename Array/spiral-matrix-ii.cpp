class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n));
        int p=1;
        int m=n;
        for(int i=0;i<(n+1)/2;i++)
        {
            
            for(int j=i;j<m-i;j++)
            {
               
                matrix[i][j]=p++;
                
            }
           
            for(int j=i+1;j<n-i;j++)
            {
            
                matrix[j][m-i-1]=p++;
                
            }
            
            for(int j=m-i-2;j>=i;j--)
            {
               
                matrix[n-i-1][j]=p++;
               
            }
            for(int j=n-i-2;j>i;j--)
            {
                matrix[j][i]=p++;
                
            }
            
        }
        return matrix;
    }
};