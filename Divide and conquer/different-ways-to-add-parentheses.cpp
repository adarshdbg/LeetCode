static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();

class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int>ans;
        int n=input.size();
        for(int i=0;i<n;i++)
        {
            int p=input[i];
            if(p=='+' || p=='-' || p=='*')
            {
                vector<int>l=diffWaysToCompute(input.substr(0,i));
                vector<int>r=diffWaysToCompute(input.substr(i+1));
                for(auto u:l)
                {
                    for(auto v:r)
                    {
                        if(p=='+')
                        ans.push_back(u+v);
                        else if(p=='-')
                            ans.push_back(u-v);
                        else
                            ans.push_back(u*v);
                    }
                }
            }
        }
        if (ans.empty())
            ans.push_back(atoi(input.c_str()));
        return ans;
    }
};