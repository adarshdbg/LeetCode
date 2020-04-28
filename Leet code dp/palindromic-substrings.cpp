class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int a[n][n]={0};
        int ans=0;
        for(int i=0;i<n;i++)
        {
            a[i][i]==1;
            ans++;
        }
        for(int j=1;j<n;j++)
        {
            for(int i=0;i<j;i++)
            {
                if(s[i]==s[j] && j-i<=2)
                {
                    ans++;
                    a[i][j]=1;
                }
                else if(s[i]==s[j] && j-i>2)
                {
                    if(a[i+1][j-1]>0)
                    {
                        ans++;
                        a[i][j]=1;
                    }
                    else
                     a[i][j]=0;   
                        
                }
                else
                    a[i][j]=0;
            }
        }
        return ans;
        
        
    }
};