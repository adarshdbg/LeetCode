static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int>v;
    vector<vector<int>>rect;
    Solution(vector<vector<int>>& rects) {
        rect=rects;
        int sum=0;
        for(int i=0;i<rects.size();i++)
        {
            v.push_back(sum + (rects[i][2]-rects[i][0]+1)*(rects[i][3]-rects[i][1]+1));
            sum=v.back();
        }
    }
    
    vector<int> pick() {
        int mid=rand()%v.back();
        auto it=upper_bound(v.begin(),v.end(),mid);
        
        int i=it-v.begin();
        return
        {
          rand()%(rect[i][2]-rect[i][0]+1) +  rect[i][0],rand()%(rect[i][3]-rect[i][1]+1) +  rect[i][1]    
        };
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(rects);
 * vector<int> param_1 = obj->pick();
 */