class Solution {
public:
    int integerBreak(int n) {
        if(n<=2)
            return 1;
        else
        {
            int a[n+1];
            a[1]=0;
            a[2]=1;
            
            for(int i=3;i<=n;i++)
            {
                for(int j=1;j<i;j++)
                {
                    a[i]=max(max(a[i],j*(i-j)),j*a[i-j]);
                }
            }
             return a[n];
        }
       
        
    }
};