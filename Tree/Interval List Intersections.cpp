static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>>v;
        int i=0,j=0;
        while(i<A.size() && j<B.size())
        {
            int p=max(A[i][0],B[j][0]);
            int q=min(A[i][1],B[j][1]);
            if(p<=q)
                v.push_back({p,q});
            
            if(A[i][1]<B[j][1])
                i++;
            else
                j++;
        }
        return v;
    }
};