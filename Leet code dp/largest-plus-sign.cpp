class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        
        int a[n][n];
        int b[n][n],c[n][n],d[n][n],e[n][n],p=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]=1;
                b[i][j]=0;
                c[i][j]=0;
                d[i][j]=0;
                e[i][j]=0;
            }
        }
        for(int i=0;i<mines.size();i++)
        {
            a[mines[i][0]][mines[i][1]]=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==1)
                    b[i][j]=p++;
                else
                    p=1,b[i][j]=0;
                    
            }
            p=1;
        }
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[j][i]==1)
                    c[j][i]=p++;
                else
                    p=1,c[j][i]=0;
            }
            p=1;
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(a[i][j]==1)
                    d[i][j]=p++;
                else
                    p=1,d[i][j]=0;
                    
            }
            p=1;
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(a[j][i]==1)
                    e[j][i]=p++;
                else
                    p=1,e[j][i]=0;
            }
            p=1;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                //if(b[i][j]==c[i][j] && c[i][j]==d[i][j] && d[i][j]==e[i][j])
                 p=min(b[i][j],min(c[i][j],min(d[i][j],e[i][j])));
                 ans=max(ans,p);
            }
        }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cout<<b[i][j]<<" ";
//             }
            
//             cout<<endl;
//         }
//         cout<<endl;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cout<<c[i][j]<<" ";
//             }
            
//             cout<<endl;
//         }
//         cout<<endl;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cout<<d[i][j]<<" ";
//             }
            
//             cout<<endl;
//         }
//         cout<<endl;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cout<<e[i][j]<<" ";
//             }
            
//             cout<<endl;
//         }
        return ans;
         
        
    }
};