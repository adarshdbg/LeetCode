class Solution {
public:
    string multiply(string num1, string num2) {
        int n=num1.size();
        int m=num2.size();
        string ans=string(n+m,'0');
        
        for(int i=n-1;i>=0;i--)
        {
            int p=0;
            for(int j=m-1;j>=0;j--)
            {
                int k=(ans[i+j+1]-'0') + (num1[i]-'0')*(num2[j]-'0') + p;
    
                ans[i+j+1]=k%10+'0';
                p=k/10;
            }
            ans[i] += p;
        }
        size_t startpos = ans.find_first_not_of("0");
        if (string::npos != startpos) {
            return ans.substr(startpos);
        }
        return "0";
    }
};