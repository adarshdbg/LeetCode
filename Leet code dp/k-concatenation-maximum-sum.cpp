static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    
    long int kadane(vector<int>& a)
    {
        int p=INT_MIN;
        int q=0;
        int f=1e9 +7;
        for(int i=0;i<a.size();i++)
        {
            q=(q+a[i]);
            p=max(q,p);
            
            if(q<0)
                q=0;
        }
        return p>=0?p%f:0;
    }
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        
        if(k==1)
            return kadane(arr);
        
        int f=1e9 +7;
        k=k-2;
        long int p=0;
        for(int i=0;i<arr.size();i++)
        {
            p+=arr[i];
        }
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            arr.push_back(arr[i]);
        }
        long int q=kadane(arr);
        
        if(p<0)
        {
            return q;
        }
        else
        {
            return (k*p)%f + q;
        }
        
        
            
    }
};