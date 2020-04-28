static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> sums;
public:
    Solution(vector<int>& w) {
        int sum = 0;
        for(int i=0;i<w.size();i++) {
            sum += w[i];
            sums.push_back(sum);
        }
    }
    
    int pickIndex() {
        int size = sums.size();
        int randomNumber = rand() % sums[size-1];
        int l=0, r=size;
        while(l<r) {
            int m = l+(r-l)/2;
            if(sums[m] <= randomNumber) l=m+1;
            else r=m;
        }
        return l;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */