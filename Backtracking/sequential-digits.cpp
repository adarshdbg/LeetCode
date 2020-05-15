static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
   // #include <cstdlib>
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<string>a;
        string p=to_string(low);
        string q=to_string(high);
        string s;
        for(int i=p.size();i<=q.size();i++)
        {
            for(int j=1;j<=10-i;j++)
            {
                for(int k=j;k<j+i;k++)
                s+=to_string(k);
                //cout<<s<<" ";
                 if(std::stoi(s)>=low && std::stoi(s)<=high)
                     a.push_back(s);
                s="";
            }
        }
        vector<int>v;
       for(auto i:a)
            v.push_back(std::stoi(i));
        
        return v;
    }
};