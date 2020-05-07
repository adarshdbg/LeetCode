static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class SummaryRanges {
    
private:
    vector<vector<int>> intervals;
    
public:
    SummaryRanges() { }

    void addNum(int val) {
        int n = intervals.size();
        if (n == 0) {
            intervals.push_back({val, val});
            return;
        }
        int lo = 0, hi = n-1;
        while (lo <= hi) {
            int mid = lo + (hi-lo)/2;
            if (intervals[mid][0] <= val && intervals[mid][1] >= val) {
                return;  
            } else if (intervals[mid][1] < val) {
                lo = mid+1;
            } else if (intervals[mid][0] > val) {
                hi = mid-1;
            }
        }
        if (lo == n) {
            if (intervals[n-1][1]+1 == val) {
                intervals[n-1][1] = val;
            } else {
                intervals.push_back({val, val});   
            }
        } else if (lo == 0) {
            if (intervals[0][0] == val+1) {
                intervals[0][0] = val;
            } else {
                intervals.insert(intervals.begin(), {val, val});
            }
        } else if (intervals[lo-1][1]+1 == val) {
            if (intervals[lo][0] == val+1) {
                intervals[lo-1][1] = intervals[lo][1];
                intervals.erase(intervals.begin()+lo);
            } else {
                intervals[lo-1][1] = val;
            }
        } else if (intervals[lo][0]-1 == val) {
            intervals[lo][0] = val;
            return;
        } else {
            intervals.insert(intervals.begin()+lo, {val, val});   
        }
    }
    
    vector<vector<int>> getIntervals() {
        return intervals;
    }
};