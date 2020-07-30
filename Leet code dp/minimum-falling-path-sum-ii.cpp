static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<vector<int>>a(n,vector<int>(n));
        vector<vector<int>>b(n,vector<int>(n));
        
        for(int i=0;i<n;i++)
        {
            if(i>0)
            a[n-1][i]=min(arr[n-1][i],a[n-1][i-1]);
            else
                a[n-1][i]=arr[n-1][i];
        }
        for(int i=n-1;i>=0;i--)
        {
            if(i<n-1)
            b[n-1][i]=min(arr[n-1][i],b[n-1][i+1]);
            else
                b[n-1][i]=arr[n-1][i];
        }
        
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0)
                    arr[i][j]=b[i+1][j+1] + arr[i][j];
                else if(j==n-1)
                    arr[i][j]=a[i+1][j-1] + arr[i][j];
                else
                    arr[i][j]=min(a[i+1][j-1],b[i+1][j+1]) + arr[i][j];
            }
            for(int j=0;j<n;j++)
            {
                if(j>0)
                a[i][j]=min(arr[i][j],a[i][j-1]);
                else
                    a[i][j]=arr[i][j];
            }
            for(int j=n-1;j>=0;j--)
            {
                if(j<n-1)
                b[i][j]=min(arr[i][j],b[i][j+1]);
                else
                    b[i][j]=arr[i][j];
            }
            
        }
        
        return *min_element(arr[0].begin(),arr[0].end());
        
    }
};