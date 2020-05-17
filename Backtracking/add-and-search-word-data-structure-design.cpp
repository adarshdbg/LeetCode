static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class WordDictionary {
public:
    /** Initialize your data structure here. */
    WordDictionary() {
        
    }
    struct trie
    {
        bool eow;
        unordered_map<char,trie*>m;
    };
    trie* trienode()
    {
        trie* trie1=new trie;
        trie1->eow=false;
        return trie1;
    }
    
    /** Adds a word into the data structure. */
    trie *root=nullptr;
    void addWord(string s) {
        
        if(root==nullptr)
           root=trienode();
        trie* temp=root;
        for(int i=0;i<s.size();i++)
        {
            if(temp->m.find(s[i])==temp->m.end())
                temp->m[s[i]]=trienode();
            
            temp=temp->m[s[i]];    
        }
        temp->eow=true;
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        bool ans=false;
       if(root==nullptr)
            return false;
         search2(word,0,root,ans);
        return ans;
    }
    void search2(string &word, int i, trie* tmp, bool& ans){
        
        if(i<word.length()){
            if(word[i] == '.'){
                for(auto ptr = tmp->m.begin(); ptr!=tmp->m.end(); ptr++){
                    search2(word, i+1, ptr->second, ans);
                }
            }else if(tmp->m.find(word[i]) != tmp->m.end()){
                search2(word, i+1, tmp->m[word[i]], ans);
            }
        }else{
            ans = ans || tmp->eow;
        }
    }
        
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */