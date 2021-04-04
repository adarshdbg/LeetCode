class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int n=matrix.size(),m=matrix[0].size();
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0)
                {
                    if(i==0 && j==0)
                        matrix[i][j]=matrix[i][j];
                    else if(i==0)
                        matrix[i][j]^=matrix[i][j-1];
                    else
                        matrix[i][j]^=matrix[i-1][j];
                }
                else
                    matrix[i][j]^=(matrix[i-1][j]^matrix[i][j-1]^matrix[i-1][j-1]);
                
                if(pq.size()<k)
                {
                    pq.push(matrix[i][j]);
                }
                else
                {
                    if(pq.top()<matrix[i][j])
                    {
                        pq.pop();
                        pq.push(matrix[i][j]);
                    }
                }
            }
            
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         cout<<matrix[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return pq.top();
        
    }
};