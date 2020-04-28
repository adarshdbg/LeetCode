class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==1)
            return 10;
        if(n==0)
            return 1;
        if(n>9)
            n=10;
        int p=9,ans=0,q=1;
        for(int i=n;i>=2;i--)
        {
            for(int j=1;j<i;j++)
            {
                q=q*(p);
                p=p-1;
            }
            q=q*9;
            ans+=q;
            p=9;
            q=1;
        }
        return ans+10;
    }
};