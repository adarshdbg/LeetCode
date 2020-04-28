static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        auto it=lower_bound(A.begin(),A.end(),0);
        int p=it-A.begin();
        //set<int>s;
        for(int i=0;i<p;i++)
        {
            A[i]*=-1;
        }
        sort(A.begin(),A.end());
        for(int i=0;i<A.size();i++)
        {
            A[i]*=A[i];
        }
        return A;
    }
};