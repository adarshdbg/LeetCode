static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    struct trie
    {
        bool eow;
        unordered_map<char,trie*>m;
    };
    trie* trienode()
    {
        trie* node=new trie;
        node->eow=false;
        return node;
    }
    void insert(trie*& root,string& s)
    {
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
  
    bool search(trie* ptr,const string &s){
		//trie* ptr=root;
		int n=s.size();
		for(int i=0;i<n;i++)
        {
            
			if(s[i]>='a' && s[i]<='z')
            {
				if(ptr->m.find(s[i])!=ptr->m.end())
                {
					ptr=ptr->m[s[i]];
                }
			}
			else
            {
				if(ptr->m.find(s[i])!=ptr->m.end())
                {
					ptr=ptr->m[s[i]];
                }	
                else
                {
                    return false;
                }
			}
		}
		return (ptr->eow);
	}
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        int n=queries.size();
        trie* p=nullptr;
        insert(p,pattern);
        
        vector<bool>ans;
        for(int i=0;i<n;i++)
        {
           ans.push_back(search(p,queries[i]));
        }
        return ans;
    }
};