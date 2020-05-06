static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        map<int,int>m;
        for(auto i:hand)
            m[i]++;
        
        
        for(auto i:m)
            if(m[i.first]>0)
            {
                for(int j=i.first+1;j<i.first+W;j++)
                {
                    if((m[j]-=m[i.first]) < 0)
                        return false;
                    
                    
                }
                m[i.first]=0;
            }
        return true;
    }
};