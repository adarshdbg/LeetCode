static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
    int MOD = 1000000007;
public:
    int threeSumMulti(vector<int>& A, int target) {
        
        int n = A.size();
        int ans = 0;
        sort(A.begin(), A.end());
        
        for (int i = 0; i < n; i++) 
        {
            int l = i+1;
            int r = n-1;            
            while (l < r) 
            {
                if (A[i] + A[l] + A[r] == target)
                {
                    if (A[l] == A[r])
                    {
                        int p = r-l+1;
                        ans = (ans%MOD + ((p*(p-1))/2)%MOD)%MOD;  
                        break;
                    } 
                    else 
                    {
                        int c1 = 1;
                        while (l+1 < n && A[l] == A[l+1])
                        {
                            l++; c1++;
                            c1 = c1%MOD;
                        }
                        
                        int c2 = 1;
                        while (r-1 >= 0 && A[r] == A[r-1])
                        {
                            r--; c2++;
                            c2 = c2%MOD;
                        }
                        ans = (ans%MOD + (c1%MOD *c2%MOD)%MOD)%MOD;
                    }
                    l++;
                    r--;
                } 
                else if (A[i] + A[l] + A[r] > target)
                {
                    r--;
                } 
                else
                {
                    l++;
                }
            }
        }
        
        return ans;
    }
};