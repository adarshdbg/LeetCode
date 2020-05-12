static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    string toHex(int num) {
        
        if(num==0)
            return "0";
            unsigned int num1=num;
        //cout<<num1<<" ";
        string s;
        while(num1!=0)
        {
            int p=num1%16;
            num1=num1/16;
            if(p==10)
                s='a'+s;
            else if(p==11)
                s='b'+s;
            else if(p==12)
                s='c'+s;
            else if(p==13)
                s='d'+s;
            else if(p==14)
                s='e'+s;
            else if(p==15)
                s='f'+s;
            else 
                s=to_string(p)+s;
        }
        return s;
    }
};