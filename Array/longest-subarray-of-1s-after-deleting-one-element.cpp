class Solution {
public:
    int longestSubarray(vector<int>& v) {
        int n=v.size();
        int ans=0;
        for(int i=0;i<n;i++)
            v[i]=i==0?v[i]:v[i]==0?0:v[i]+v[i-1],ans=max(ans,v[i]);
        
        if(v[n-1]==n)
            return n-1;
        
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]==0)
                continue;
            else
            {
            
                v[i]=i==n-1?v[i]:max(v[i],v[i+1]);
                if(i-1>=0 && v[i-1]==0)
                    ans=max(ans,i-2>=0?v[i]+v[i-2]:v[i]);
                
            }
        }
        return ans;
    }
};