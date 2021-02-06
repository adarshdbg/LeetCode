class Solution {
public:
    string simplifyPath(string path) {
        stack<string>s;
        int i=1,n=path.size(),j=1;
        while(j<n)
        {
            j=i;
            string p;
            while(j<n)
            {
                if(path[j]=='/')
                {
                    j+=1;
                    i=j;
                    break;
        
                }
                p+=path[j++];
            }
            //cout<<p<<" ";
            if(p=="" || p==".")
                continue;
            if(p=="..")
            {
                if(s.empty())
                    continue;
                else
                    s.pop();
            }
            else
                s.push(p);
        }
        //cout<<s.top()<<" ";
        if(s.empty())
            return "/";
        string ans="";
        while(!s.empty())
        {
            ans=s.top()+ans;
            ans='/'+ans;
            s.pop();
    
        }
        
        return ans;
        
        
    }
};