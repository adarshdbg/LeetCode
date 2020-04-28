static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>p;
        string s="";
        if(a)
        p.push({a,'a'});
        if(b)
        p.push({b,'b'});
        if(c)
        p.push({c,'c'});
        while(p.size()>=2)
        {
            pair<int,char> one=p.top();
            p.pop();
            pair<int,char> two=p.top();
            p.pop();
            if(one.first >= 2)
            {
                s=s+one.second;
                s=s+one.second;
                one.first-=2;
            }
            else
            {
                s=s+one.second;
                one.first-=1;
            }
            if(two.first >= 2 && two.first >= one.first)
            {
                s=s+two.second;
                s=s+two.second;
                two.first-=2;
            }
            else
            {
                s=s+two.second;
                two.first-=1;
            }
            if(one.first >0)
                p.push(one);
            if(two.first>0)
                p.push(two);
        }
        if(p.empty())
            return s;
        if(p.top().first>=2)
        {
            s+=p.top().second;
            s+=p.top().second;
            return s;
        }
        else
        {
            s+=p.top().second;
            return s;
        }
        
        
    }
};