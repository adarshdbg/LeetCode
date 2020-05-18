static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int numSteps(string s) {
           int steps = 0;
        int i = s.size()-1;
        while(i>0){
            if(s[i]=='0'){ 
                steps++; 
				i--;
            }
            else{
                steps++;   
                while(i>=0){
                    if(s[i]=='1'){
                        steps++; 
                        i--;
                    }
                    else{
                        s[i]='1';
                        break;
                    }
                }
            }
        }
        return steps;
    }
};