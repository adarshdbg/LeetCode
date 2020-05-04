static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int longestMountain(vector<int>& A) {
        int i=0,j=1;
        int k=0,ans=0,u=0;
        if(A.size()<3)
            return 0;
        while(j<A.size()-1)
        {
            if(A[j]>A[j-1] && A[j]>A[j+1])
            {
                int l=j-1,h=j+1;
                while(l>0 && A[l]>A[l-1])
                    l--;
                while(h<A.size()-1 && A[h]>A[h+1])
                    h++;
                
                ans=max(ans,h-l+1);
                j=h;
                    
            }
            else
                j++;
        }
        
        
        
        return ans;
    }
};