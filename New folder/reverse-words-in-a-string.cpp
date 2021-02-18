class Solution {
public:
    void rever(string &s,int i,int j)
    {
        while(i<=j)
        {
            swap(s[i++],s[j--]);
        }
    }
    string reverseWords(string s) {
        int i=0,n=s.size(),j=0;
        int l=0,p=0;
        
        while(true)
        {
            while(i<n && s[i]==' ')
                i++;
            
            if(i==n)
                break;
            if(p)
                s[j++]=' ';
            l=j;
            
            while(i<n && s[i]!=' ')
            {
                s[j++]=s[i++];
            }
            rever(s,l,j-1);
            p++;
            
        }
        s.resize(j);
        rever(s,0,j-1);
        return s;
        
    }
};