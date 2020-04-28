static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int binary(vector<int>&v,int l,int r,int m)
    {
        if(l==r)
        {
          if(v[l]==0)
              return -1;
          else
              return l;
        }
        int mid=(l+r)/2;
        if(v[mid]>0)
        {
            if(mid+1<=m && v[mid+1]==0)
            {
                return mid;
            }
            else
                return binary(v,mid+1,r,m);
        }
        else
        {
            if(mid==0)
                return -1;
            else
            return binary(v,l,mid-1,m);
        }
    }
    static inline  bool sort1(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.second==b.second)
            return a.first<b.first;
        else
            return a.second<b.second;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>v;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            v.push_back({i,binary(mat[i],0,m-1,m)+1});
        }
        sort(v.begin(),v.end(),sort1);
        // for(auto i:v)
        // {
        //     cout<<"{"<<i.first<<","<<i.second<<"}";
        // }
        vector<int>ans;
        int i=0;
        while(k--)
        {
            ans.push_back(v[i].first);
            i++;
        }
        return ans;
    }
};