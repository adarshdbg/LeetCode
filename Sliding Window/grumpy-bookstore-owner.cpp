static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int n=grumpy.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(!grumpy[i])
                ans+=customers[i],customers[i]=0;
        }
        int sum=0,i=0,j=0,k=0;
        for(j=0;j<n;j++)
        {
            sum+=customers[j];
            if(j-i == X)
                sum-=customers[i++];
            
            k=max(k,sum);
        }
        return ans+k;
        
    }
};