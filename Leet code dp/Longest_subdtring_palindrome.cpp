class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        string tt="";
        if(n==0)
            return tt;
        else
        {
        bool table[n][n];
        memset(table,0,sizeof(table));
    //string p="";
        int start=0;
        int p=1;
        for(int i=0;i<n;i++)
        {
            table[i][i]=true;
        }
        
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                table[i][i+1]=true;
                start=i;
                p=2;
            }
        }
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<n-i+1;j++)
            {
                int k=j+i-1;
                if(s[j]==s[k] && table[j+1][k-1]==true)
                {
                    table[j][k]=true;
                    
                    if(i>p )
                    {
                        start=j;
                        p=i;
                    }
                }
            }
        }
        string ans="";
        for(int i=start;i<start+p;i++)
        {
            ans+=s[i];
        }
        return ans;
        }
    }
};