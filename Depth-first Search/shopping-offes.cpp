static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        
        return findmin(price,special,needs,0);
    }
    
    int findmin(vector<int>& price,vector<vector<int>>& special,vector<int>&needs,int pos)
    {
       int p=withoutoffer(needs,price); 
        
        for(int i=pos;i<special.size();i++)
        {
            vector<int>a=special[i];
            vector<int>temp;
            
            for(int j=0;j<needs.size();j++)
            {
                if(a[j]>needs[j])
                {
                    temp.clear();
                    break;
                }
                temp.push_back(needs[j]-a[j]);
            }
            
            if(temp.size()>0)
            {
                p=min(p,a[a.size()-1]+findmin(price,special,temp,i));
            }
        }
        return p;
    }
    
    int withoutoffer(vector<int>& needs,vector<int>& price)
    {
        int p=0;
        for(int i=0;i<needs.size();i++)
        {
            p+=needs[i]*price[i];
        }
        return p;
    }
};