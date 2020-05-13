static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    string removeKdigits(string nums, int k) {
        
        int n=nums.size();
        if(n==k)
            return "0";
        
        stack<char>s;
        
        int i=0;
        while(i<n)
        {
            while(k>0 && !s.empty() && s.top()>nums[i] )
            {
                s.pop();
                //cout<<s.top()<<" ";
                k--;
            }
            s.push(nums[i]);
            i++;
        }
        while(k>0)
        {
            s.pop();
            k--;
        }
        string ans;
        while(!s.empty())
        {
            ans=s.top()+ans;
            s.pop();
        }
         i=0;
        while(ans[i]=='0' && ans.size()>1)
        {
            ans.erase(ans.begin());
        }

        return ans;
        
    }
};