class Solution {
public:
    int strStr(string s, string x) {
         int m=s.length();
     int n=x.length();
     string s2;
     int i,k=0,j,t;
        
        if(n==0)
            return 0;
        else{
        for(i=0;i<m;i++)
     {
         s2=s.substr(i,n);
         if(s2.compare(x)==0)
         {
             return i;
         }
     }
     return -1;
        }
            
    }
};