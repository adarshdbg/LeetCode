static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class NumMatrix {
public:
    vector<vector<int>>a;
    NumMatrix(vector<vector<int>>& matrix) {
        if(matrix.size()>0)
        {
            for(int i=1;i<matrix[0].size();i++)
            {
                matrix[0][i]+=matrix[0][i-1];
                //matrix[i][0]+=matrix[i-1][0];
            }
            for(int i=1;i<matrix.size();i++)
            {
                //matrix[0][i]+=matrix[0][i-1];
                matrix[i][0]+=matrix[i-1][0];
            }
            for(int i=1;i<matrix.size();i++)
            {
                for(int j=1;j<matrix[i].size();j++)
                {
                    matrix[i][j]=matrix[i][j-1]+matrix[i-1][j]-matrix[i-1][j-1]+matrix[i][j];
                }
            }
      
            a.resize(matrix.size());
            for(int i=0;i<matrix.size();i++)
            {
                a[i].resize(matrix[i].size());
                for(int j=0;j<matrix[i].size();j++)
                {
                    a[i][j]=matrix[i][j];
                }
            }
        }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        if(a.size()==0)
            return{};
        return a[r2][c2]-(c1>0?a[r2][c1-1]:0)-(r1>0?a[r1-1][c2]:0)+(r1>0 && c1>0?a[r1-1][c1-1]:0);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */