class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string>num;
        for(auto &i:nums)
        {
            num.push_back(to_string(i));
        }
        
        sort(num.begin(),num.end(),[](string &i,string &j){
           return i+j > j+i; 
        });
        
        string ans;
        for(auto &i:num)
            ans+=i;
        while(ans[0]=='0' && ans.length()>1)
            ans.erase(0,1);
        return ans;
    }
};