static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
struct TrieNode{
    TrieNode* children[26] = {};
    bool end = false;
};

class MagicDictionary {
private:
    TrieNode *head;    //A tree structure where each node has up to 26 branches each representing a next letter
                      //Each root-to-leaf traversal represents a word in the dictionary
    
public:
    /** Initialize your data structure here. */
    MagicDictionary() {
        head = new TrieNode;
    }

    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) {
        for (auto& d : dict){                                           //for each word
            TrieNode* current = head;                                   //establish cursor for Trie traversal
            for (int i = 0; i < d.size(); i++){                         //iterate over all the letters
                if (current->children[d[i]-'a'] == nullptr){            //insert into tree at current node
                    current->children[d[i]-'a'] = new TrieNode;
                }
                current = current->children[d[i]-'a'];                  //move to next node
            }
            current->end = true;                                        //when word is finished, set leaf indicator
        }
    }

    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word) {
        if (word.size() == 0) return false;
        int diff = 0;
        return DFS(head, word, 0, diff);
    }
    
    //Recursion backtrack DFS of Trie that returns true if the path matches the word with exactly one letter not matching
    bool DFS(TrieNode* head, string& word, int pos, int& diff){
        if (diff > 1) return false;                                //we found more than one non-matching, no need for further analysis
        if (head->end && pos == word.size() && diff == 1){         //if all conditions satisfied at end of word, return true
            return true;
        }
        
        //Check all branches for a completion of letter sequence that satisfies the problem conditions
        bool downstreamOK = false;
        for (int i = 0; i < 26; i++){                                   //iterate over all potential branches
            if (head->children[i] != nullptr){
                int temp = diff;                                        //cache the different numbers count at the current node
                if (i != word[pos]-'a') diff++;
                downstreamOK = DFS(head->children[i],word,pos+1,diff);  //Recursion
                if (downstreamOK) break;
                diff = temp;                                            //backtrack by restoring node conditions
            }
        }
        return downstreamOK;
    }
};