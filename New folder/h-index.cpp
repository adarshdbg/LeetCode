class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.empty())
            return 0;
        sort(citations.begin(), citations.end());
        int n=citations.size();
        int i=0;
        while(i<n && citations[i]<(n-i)) i++;
        return n-i;
    }
};