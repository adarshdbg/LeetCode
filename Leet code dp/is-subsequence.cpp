class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        int i=0,j=0;
       for (j=0; i<n&&j<m; j++) 
       {
       if (s[i] == t[j]) 
         i++;
       }
            
  
        if(i==n)
            return true;
        else
            return false;
    }
};