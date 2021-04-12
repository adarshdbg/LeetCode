class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans=0;
        int n=timeSeries.size(),p=0;
        if(n==0)
            return 0;
        
        for(int i=0;i<n-1;i++)
            ans+=min(timeSeries[i+1]-timeSeries[i],duration);
        return ans+duration;
    }
};