static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int>v;
        int height=log2(label);
        v.push_back(label);
        
        while(height)
        {
            int l=pow(2,height-1);
            int r=pow(2,height)-1;
            
            label=l+(r-label/2);
            v.push_back(label);
            height--;
        }
        reverse(v.begin(),v.end());
        return v;
    }
};