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
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int r=*max_element(nums.begin(),nums.end());
        int l=1;
        return binary(nums,l,r,threshold);
    }
};
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<pair<int,int>> s(n);
        int e[n];
        for(int i=0;i<n;i++)
        {
            s[i].first=intervals[i][0];
            s[i].second=i;
            e[i]=intervals[i][1];
        }
        sort(s.begin(),s.end());
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int p=e[i];
            int l=0,r=n-1;
            while(l<=r)
            {
                int mid=l + (r-l)/2;
                if(s[mid].first<p)
                    l=mid+1;
                else
                    r=mid-1;
            }
            if(l<=n-1)
                v.push_back(s[l].second);
            else
                v.push_back(-1);
        }
        return v;
    }
};