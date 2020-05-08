static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
vector<int> ans;
class Solution {
public:
    void recursion(int n)
    {
        if(ans.size()<=n)
        {
            recursion(n-3);
            recursion(n-2);
            recursion(n-1);
            ans.push_back(ans[n-3]+ans[n-2]+ans[n-1]);
        }
    }
    int tribonacci(int n) {
        ans.clear();
        ans.push_back(0);
        ans.push_back(1);
        ans.push_back(1);
        recursion(n);
        return ans[n];
    }
};