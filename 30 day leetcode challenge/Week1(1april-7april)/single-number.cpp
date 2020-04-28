class Solution {
public:
    int singleNumber(vector<int>& nu) {
        int n=nu.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans^=nu[i];
        }
        return ans;
        
    }
};