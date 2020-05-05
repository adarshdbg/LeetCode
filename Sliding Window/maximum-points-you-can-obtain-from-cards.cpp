static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0;
        for(int i=n-k;i<n;i++)
        {
            sum+=cardPoints[i];
        }
        int i=n-k,p=sum;
        for(int j=0;j<k;j++)
        {
            p=p-cardPoints[i++]+cardPoints[j];
            sum=max(sum,p);
        }
        return sum;
    }
};