static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int binary(vector<int>&v,int l,int r,int h)
    {
        if(l<=r)
        {
            int ans=0;
            int mid=l + (r-l)/2;
           for(int i=0;i<v.size();i++)
           {
               //v[i]%mid == 0?ans=ans + v[i]/mid:ans=ans+1 + v[i]/mid;
               if(v[i]%mid == 0)
                   ans=ans+ v[i]/mid;
               else
                   ans=ans+1 + v[i]/mid;
           }
            if(ans>h)
              return binary(v,mid+1,r,h);
            else
                return  binary(v,l,mid-1,h);
               
        }
        return l;
    }
    int minEatingSpeed(vector<int>& piles, int H) {
        int n=piles.size();
        int r=*max_element(piles.begin(),piles.end());
        int l=1;
        return binary(piles,l,r,H);
    }
};