class Solution {
public:
    int maxTurbulenceSize(vector<int>& a) {
        int n=a.size();
        if(n==1)
            return 1;
        if(n==2)
        {
            if(a[0]==a[1])
                return 1;
            else
                return 2;
        }
        int b[n-1],t=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
                t++;
        }
        if(t==n-1)
            return 1;
        for(int i=0;i<n-1;i++)
        {
            b[i]=a[i+1]-a[i];
        }
        int i=0,j=1,ans=0,p=b[0],l=0;
        while(j < (n-2))
        {
            l=1;
            if(p<0 && b[j]>0)
                ans=max(ans,j-i),p=b[j],j++;
            else if(p>0 && b[j]<0)
                ans=max(ans,j-i),p=b[j],j++;
            else
            {
                i=j;
                j=j+1;
                p=b[i];
            }
            cout<<p<<" "<<ans<<" ";
        }
        if(p<0 && b[n-2]>0)
                ans=max(ans,j-i),p=b[j],j++;
         if(p>0 && b[n-2]<0)
                ans=max(ans,j-i),p=b[j],j++;
        if(l==1)
        return ans+2;
        else
            return ans+1;
    }
};