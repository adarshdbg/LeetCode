static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    struct trie{
        bool endofword;
        unordered_map<char,trie*>m;
    };
    trie* trienode()
    {
        trie* node=new trie;
        node->endofword=false;
        return node;
    }
    bool insert(trie*& root1,string& s)
    {
        if(root1==nullptr)
          root1=trienode();
        trie* root=root1;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(root->endofword==false)
                ans++;
            if(root->m.find(s[i])==root->m.end())
                root->m[s[i]]=trienode();
            
            root=root->m[s[i]];
        }
        root->endofword=true;
        if(ans == 1)
        return true;
        else
        return false;
    }
    string longestWord(vector<string>& words) {
     int n=words.size();
        trie* p=nullptr;
        if(n==0)
            return {};
        if(n==1)
            return words[0];
        int count=0;
        string str="";
        sort(words.begin(),words.end());
        for(int i=0;i<n;i++)
        {
            bool valid=insert(p,words[i]);
            if(valid)
            {
                if(words[i].length() > str.length())
                {
                    // if(!lexicographical_compare(words[i].begin(), words[i].end(), str.begin(), str.end()))
                    str = words[i];
                }
            }
            
        }
        return str;
        
    }
};