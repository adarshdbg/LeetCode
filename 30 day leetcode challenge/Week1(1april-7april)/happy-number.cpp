class Solution {
    
public:
    //#include <map>
    bool isHappy(int n) {
        unordered_map<int,int>m;
        int p,q=n,ans=0;
        while(n!=1 && m[n]==0)
        {
             p=n;
            m[n]++;
            while(p!=0)
            {
                ans=ans + pow((p%10),2);
                p=p/10;     
            }
            //cout<<ans<<" ";
            n=ans;
            
            ans=0;
        }
        if(n==1)
            return true;
        else
            return false;
    }
};