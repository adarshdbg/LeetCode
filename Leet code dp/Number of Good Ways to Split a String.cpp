class Solution {
public:
    void FastIO()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
//cout.tie(0);
}
    int numSplits(string s) {
        vector<int>count1(26);
        vector<int>count2(26);
        int no_of_unique=0;
        for(auto &i:s)
        	no_of_unique+=++count1[i-'a']==1;
        
        int no_of_leftunique=0,no_of_rightunique=no_of_unique;
        int ans=0;
        for(auto &i:s)
        {
        	no_of_leftunique+=++count2[i-'a']==1;
        	no_of_rightunique-=--count1[i-'a']==0;
        	ans+=no_of_leftunique==no_of_rightunique;
        }
        return ans;
    }
};