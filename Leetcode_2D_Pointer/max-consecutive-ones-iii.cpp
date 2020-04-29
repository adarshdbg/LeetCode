static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int longestOnes(vector<int>& A, int k) {
        int i=0,j=0;
        int ans=INT_MIN;
        for(j=0;j<A.size();j++)
        {
            if(A[j]==0)
                k--;
             if(k<0 && A[i++]==0)k++;
            
            //cout<<"{"<<i<<","<<j<<","<<k<<"}";
        }
         
        return j-i;
    }
};