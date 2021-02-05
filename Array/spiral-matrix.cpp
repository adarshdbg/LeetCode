class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        int h=m*n;
        for(int i=0;i<(n+1)/2;i++)
        {
            if(!h)
                break;
            for(int j=i;j<m-i;j++)
            {
                h--;
                ans.push_back(matrix[i][j]);
                
            }
            if(!h)
                break;
            for(int j=i+1;j<n-i;j++)
            {
                h--;
                ans.push_back(matrix[j][m-i-1]);
                
            }
            if(!h)
                break;
            for(int j=m-i-2;j>=i;j--)
            {
                h--;
                ans.push_back(matrix[n-i-1][j]);
               
            }
            if(!h)
                break;
            for(int j=n-i-2;j>i;j--)
            {
                h--;
                ans.push_back(matrix[j][i]);
                
            }
            
        }
        return ans;
    }
};