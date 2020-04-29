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
        int i=0,j=0,k=0,l=0;
        vector<vector<int>>v;
        while(i<A.size() && j<B.size())
        {
            vector<int>t(2);
            if(B[j][0]<=A[i][0]  &&  B[j][1]>=A[i][1])
            {
                t[0]=A[i][0];
                t[1]=A[i][1];
                v.push_back(t);
                i++;
            }
             else if(B[j][0]>=A[i][0]  &&  B[j][1]<=A[i][1])
            {
                t[0]=B[j][0];
                t[1]=B[j][1];
                 v.push_back(t);
                j++;
            }
            else if(B[j][0]<=A[i][1] && A[i][0]<=B[j][0])
            {
                t[0]=B[j][0];
                t[1]=A[i][1];
                v.push_back(t);
                i++;
            }
            else if(A[i][0]<=B[j][1] && A[i][0]>=B[j][0])
            {
                t[0]=A[i][0];
                t[1]=B[j][1];
                v.push_back(t);
                j++; 
            }
            else if(A[i][1]<B[j][0])
            {
                i++; 
            }
            else
            {
                j++;
            }
            
        }
        return v;
    }
};