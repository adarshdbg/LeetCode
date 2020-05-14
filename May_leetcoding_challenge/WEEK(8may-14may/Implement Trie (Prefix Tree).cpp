class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {
        
    }
    struct trie{
        
        bool eow;
        unordered_map<char,trie*>m;
    };
    trie *trienode()
    {
        trie* node=new trie;
        node->eow=false;
        return node;
    }
    /** Inserts a word into the trie. */
    trie* root=nullptr;
    void insert(string word) {
        if(root==nullptr)
             root=trienode();
        trie* temp=root;
        for(int i=0;i<word.size();i++)
        {
            if(temp->m.find(word[i])!=temp->m.end())
                temp=temp->m[word[i]];
            else
            {
                temp->m[word[i]]=trienode();
                temp=temp=temp->m[word[i]];;
            }
        }
        temp->eow=true;
        
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        if(root==nullptr)
            return false;
        trie* temp=root;
        for(int i=0;i<word.size();i++)
        {
            if(temp->m.find(word[i])!=temp->m.end())
                temp=temp->m[word[i]];
            else
                return false;
        }
        return temp->eow==true;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        if(root==nullptr)
            return false;
        trie* temp=root;
        for(int i=0;i<prefix.size();i++)
        {
            if(temp->m.find(prefix[i])!=temp->m.end())
                temp=temp->m[prefix[i]];
            else
                return false;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */