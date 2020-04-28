class Solution {
public:
    int numTrees(int n) {
        int i,j;
        int a[n+1];
        a[0]=a[1]=1;
        for(i=2;i<=n;i++)
        {
            a[i]=0;
            for(j=0;j<i;j++)
            {
                a[i]+=a[j]*a[i-j-1];
            }
        }
        return a[n];
    }
};