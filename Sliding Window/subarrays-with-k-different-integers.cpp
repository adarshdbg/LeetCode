static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& A, int K) {
        return subarraysWithAtmostK(A, K) - subarraysWithAtmostK(A, K-1);
        
    }
    int subarraysWithAtmostK(vector<int>& A, int K)
    {
        unordered_map<int,int>hm;
        int j=0,ans=0;
        int n=A.size();
        for(int i=0;i<A.size();i++)
        {
            hm[A[i]]++;
            while (j < n && hm.size() > K) {
                hm[A[j]]--;
                if (hm[A[j]] == 0)
                    hm.erase(A[j]);
                j++;
            }
            ans += (i-j+1);
        }
        return ans;
    }
};