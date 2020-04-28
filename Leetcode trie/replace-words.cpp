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
    vector<string> removeDupWord(string str) 
    { 
        vector<string> ans;
        // Used to split string around spaces. 
        istringstream ss(str); 
  
        // Traverse through all words 
        do { 
            // Read a word 
            string word; 
            ss >> word; 
  
            // Print the read word 
            //cout << word << endl; 
             ans.push_back(word);
            // While there is more to read 
        } while (ss); 
        return ans;
    } 
    string search(trie* root,string s)
    {
        if(root==nullptr)
            return s;
        int k=0;
        string l="";
        for(int i=0;i<s.size();i++)
        {
            if(root->m.find(s[i])!=root->m.end())
            {
                //k++;
                l=l+s[i];
                root=root->m[s[i]];
                if(root->eow==true)
                    return l;
            }
            else
            {
                if(root->eow==true)
                    return l;
                else
                    return s;
            }
        }
        return s;
    }
    string replaceWords(vector<string>& dict, string sentence) {
        int n=dict.size();
        trie* p=nullptr;
        for(int i=0;i<n;i++)
        {
            insert(p,dict[i]);
        }
        string s="";
        vector<string>ans;
        vector<string>ans1;
        ans=removeDupWord(sentence);
        
        for(int i=0;i<ans.size();i++)
        {   
            s=s+search(p,ans[i])+" ";
        }
        ans1=removeDupWord(s);
        s="";
        for(int i=0;i<ans1.size()-1;i++)
        {   
            if(i==0)
            s=s+ans1[i];
            else
              s=s+" "+ans1[i];  
        } 
        return s;
            
    }
};