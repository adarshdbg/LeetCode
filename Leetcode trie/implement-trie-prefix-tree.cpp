static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class TrieNode
{
public:
    unordered_map<char,TrieNode*> m;
    bool isend;
    TrieNode() :isend(false) {}
};

class Trie {
public:
    Trie() {
        root =new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        int n=word.length();
        TrieNode* curr=root;
        for(int i=0;i<n;i++){
            if(!curr->m[word[i]]) curr->m[word[i]]=new TrieNode();
            curr=curr->m[word[i]];
        }
        curr->isend=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        int n=word.length();
        TrieNode* curr=root;
        for(int i=0;i<n;i++){
            if(!curr->m[word[i]]) return false;
            curr=curr->m[word[i]];
        }
        return curr->isend;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string word) {
        int n=word.length();
        TrieNode* curr=root;
        for(int i=0;i<n;i++){
            if(!curr->m[word[i]]) return false;
            curr=curr->m[word[i]];
        }
        return true;
    }
private:
    TrieNode* root;
};