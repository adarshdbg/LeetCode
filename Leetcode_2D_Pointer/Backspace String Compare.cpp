class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string a="",b="";
        
        for(int i=0;i<S.size();i++)
        {
            
            if(S[i]!='#')
            {
                a+=S[i];
            }
            if(!a.empty())
            {
            if(S[i]=='#')
                a.pop_back();
            }
        }
        for(int i=0;i<T.size();i++)
        {
            if(T[i]!='#')
            {
                b+=T[i];
            }
            if(!b.empty())
            {
            if(T[i]=='#')
                b.pop_back();
            }
        }
        if(a==b || (a.size()==0 && b.size()==0))
            return true;
        else
            return false;
    }
};