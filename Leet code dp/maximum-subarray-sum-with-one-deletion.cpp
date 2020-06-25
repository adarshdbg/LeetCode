static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size();
        int hh=INT_MIN;
        for(int i=0;i<n;i++)
        {
                hh=max(hh,arr[i]);
        }
        if(hh<=0)
            return hh;
        vector<int>a(n);
        vector<int>b(n);
        
        int p=0;
        for(int i=0;i<n;i++)
        {
            p+=arr[i];
            if(p<0)
                p=0;
            a[i]=p;

        }
         p=0;
        for(int i=n-1;i>=0;i--)
        {
            p+=arr[i];
            
            if(p<0)
                p=0;
            b[i]=p;
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<b[i]<<" ";
        // }
        int ans=INT_MIN;
        for(int i=1;i<n-1;i++)
        { 
             if(arr[i]<0)
             ans=max(ans,a[i-1]+b[i+1]);
            else
              ans=max(ans,a[i-1]+b[i+1]+arr[i]); 
        }
        return ans;
        
        
        
    }
};