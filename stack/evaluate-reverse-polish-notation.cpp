class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        
        for(auto &i1:tokens)
        {
            if(i1.size()==1)
            {
                char i=i1[0];
                if(i=='+' || i=='-' || i=='*' || i=='/')
                {
                    int p=s.top();
                    s.pop();
                    int q=s.top();
                    s.pop();
                    if(i=='+')
                    {
                        s.push(p+q);
                    }
                    else if(i=='-')
                    {
                        s.push(q-p);
                    }
                    else if(i=='*')
                    {
                        s.push(p*q);
                    }
                    else if(i=='/')
                    {
                        s.push(q/p);
                    }
                }
                else
                {
                    s.push(stoi(i1));
                }
            }
            else
            {
                s.push(stoi(i1));
            }
        }
        return s.top();
    }
};