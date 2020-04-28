class Solution {
public:
    int lenLongestFibSubseq(vector<int>& a) {
        unordered_set<int> s(a.begin(),a.end());
        int ans=0;
        for(int i=0;i<a.size();i++)
        {
            for(int j=i+1;j<a.size();j++)
            {
                int x=a[j];
                int y=a[i]+a[j];
                int len=2;
                while(s.find(y)!=s.end())
                {
                    int z=x+y;
                    x=y;
                    y=z;
                    ans=max(ans,++len);
                }
            }
        }
        return ans;
    }
}; 