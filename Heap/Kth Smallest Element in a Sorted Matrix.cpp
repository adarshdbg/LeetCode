static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>p;
        //set<int>s;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                p.push(-1*matrix[i][j]);
            }
        }
        k=k-1;
        while(k--)
        {
            p.pop();
        }
        return -1*p.top();
        
    }
};