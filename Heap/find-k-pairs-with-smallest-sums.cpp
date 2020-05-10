static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
    struct compare {
        bool operator() (pair<int, int>p1, pair<int, int>p2) {
            if(p1.first + p1.second == p2.first + p2.second)
                return p1.first<p2.first;
            return p1.first + p1.second > p2.first + p2.second;
        }
    };
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        vector<vector<int>>res;
        priority_queue<pair<int, int>, vector<pair<int, int>>, compare>pq;
        for(auto i:nums1)
        {
            for(auto j:nums2)
                pq.push({i,j});
        }
        
        while(!pq.empty()) 
        {
            pair<int, int>p = pq.top();
            pq.pop();
            vector<int>v{p.first, p.second};
            res.push_back(v);
        }
        
        if(k>=res.size())
        return res;
        else
            return {res.begin(),res.begin()+k};
    }
};