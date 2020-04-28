static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int n=weights.size();
        int l=*max_element(weights.begin(),weights.end());
        int r=25000000;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int wt=0;
            int d=1;
            for(int i=0;i<n;i++)
            {
                if(wt+weights[i] <= mid)
                {
                    wt=wt+weights[i];
                }
                else
                {
                 d++;   
                 wt=weights[i];
                }
            }
            if(d<=D)
                r=mid-1;
            else
                l=mid+1;
        }
        return l; 
    }
};