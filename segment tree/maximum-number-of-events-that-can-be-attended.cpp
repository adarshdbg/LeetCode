static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        priority_queue<int,vector<int>,greater<int>>p;
        int n=events.size();
        sort(events.begin(),events.end());
        int j=0;
        int ans=0;
        for(int i=1;i<=1000000;i++)
        {
            if(j>n)
                break;
            while(p.size() && p.top()<i)
                p.pop();   
            while(j<n && events[j][0]==i)
                p.push(events[j++][1]);
            if(p.size())
            {
                p.pop();
                ans++;
            }
        }
        return ans;
    }
};