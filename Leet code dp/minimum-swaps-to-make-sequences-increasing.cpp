static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int minSwap(vector<int>& a, vector<int>& b) {
        
        int n=a.size();
        
        vector<int>swap1(n,n);
        vector<int>not_swap(n,n);
        swap1[0]=1;
        not_swap[0]=0;
        
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1] && b[i]>b[i-1])
            {
                swap1[i]=swap1[i-1]+1;
                not_swap[i]=not_swap[i-1];
            }
            if(a[i]>b[i-1] && b[i]>a[i-1])
            {
                swap1[i]=min(not_swap[i-1]+1,swap1[i]);
                not_swap[i]=min(swap1[i-1],not_swap[i]);
            }
            
        }
        return min(swap1[n-1],not_swap[n-1]);
    }
};