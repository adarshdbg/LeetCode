
static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    
    int getKth(int lo, int hi, int k) {
        int n;
        n=hi - lo +1;
        vector<vector<int>>a;
        int j=0,count=0;
        for(int i=lo;i<=hi;i++)
        {
         int cnt = 0;
            long num = i;
            while(num != 1) {
                if(num % 2 == 0)
                    num /= 2;
                else 
                    num = 3 * num + 1;
                cnt++;
            }
            vector<int> v = { cnt, i };
            a.push_back(v);
        }
        sort(a.begin(),a.end());
        return a[k-1][1];
    }
    
};