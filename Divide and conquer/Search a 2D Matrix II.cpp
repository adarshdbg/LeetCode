static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = matrix.size()-1;
        int j = 0;
        while(i>=0 && j<matrix[0].size()){
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                j++;
            else
                i--;
        }
        return false;
    }
};