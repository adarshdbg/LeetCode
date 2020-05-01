static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),i=0,j=n-1,ans=INT_MIN;
        while(i<j)
        {
            ans=max(ans,min(height[i],height[j])*(j-i));
            min(height[i],height[j])==height[i]?i++:j--;
        }
        return ans;
    }
};