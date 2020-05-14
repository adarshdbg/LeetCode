static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class CombinationIterator {
public:
    //int i=0;
    int n;
    vector<string>ans;
    string s="";
    string p;
    CombinationIterator(string characters, int combinationLength) {
        n=combinationLength;
        p=characters;
        totalno(p,s,0);
    }
    
    string next() {
       
        string ans1=*ans.begin();
        ans.erase(ans.begin());
        return ans1;
    }
    void totalno(string &a,string s,int j)
    {
        if(s.size()==n)
        {
            //cout<<s<<" ";
            ans.push_back(s);
            return ;
        }
        
        //ans.push_back(s);
        for(int i=j;i<a.size();i++)
        {
            s.push_back(a[i]);
            //cout<<s<<" ";
            totalno(a,s,i+1);
            s.pop_back();
        }
        
    }
    
    bool hasNext() {
        //cout<<ans.size()<<" ";
        return ans.size()>0;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */