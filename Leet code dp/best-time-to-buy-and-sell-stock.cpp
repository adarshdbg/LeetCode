class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mi=INT_MAX;
        int ma=0;
        
        for(int i=0;i<p.size();i++)
        {
            if(p[i]<mi)
                mi=p[i];
            else if(p[i]-mi >= ma)
                ma=p[i]-mi;
        }
        return ma;
    }
};