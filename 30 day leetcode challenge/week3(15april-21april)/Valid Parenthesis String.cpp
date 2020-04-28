class Solution {
public:
    bool checkValidString(string s) {
        int p=0,q=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                p++;
                q++;
            }
            else if(s[i]==')')
            {
                p--;
                q=max(q-1,0);
            }
            else
            {
                p++;
                q=max(q-1,0);
            }
            
            if (p < 0) return false;
        }
       
        return q==0;
    }
};