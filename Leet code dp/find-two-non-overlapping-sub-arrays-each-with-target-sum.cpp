static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n=arr.size();
        vector<int>pre(n);
        unordered_map<int,int>m;
        vector<int>len1(n,n+1);
        m[0]=-1;
        for(int i=0;i<n;i++)
        {
            pre[i]=i==0?arr[i]:arr[i]+pre[i-1];
            int p=n+1;
            if(m.find(pre[i]-target)!=m.end())
            {
                p=i-m[pre[i]-target];
            }
            m[pre[i]]=i;
            len1[i]=i==0?p:min(len1[i-1],p);
        }
        vector<int>suf(n);
        
        reverse(arr.begin(),arr.end());
        m.clear();
        m[0]=-1;
        
        vector<int>len2(n,n+1);
        for(int i=0;i<n;i++)
        {
            suf[i]=i==0?arr[i]:arr[i]+suf[i-1];
            int p=n+1;
            if(m.find(suf[i]-target)!=m.end())
            {
                p=i-m[suf[i]-target];
            }
            m[suf[i]]=i;
            len2[i]=i==0?p:min(len2[i-1],p);
        }
        
        
        int ans=n+1;
        for(int i=0;i<n-1;i++)
        {
            ans=min(ans,len1[i]+len2[n-i-1-1]);
        }
        return ans==n+1?-1:ans;
        
    }
};