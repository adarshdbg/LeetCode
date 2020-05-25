/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
private:
    
    void recurseDown(vector<string>& ourVec, TreeNode* root, string ourStr) {
        
        if (!root) return;
        
        if (root->left == nullptr && root->right == nullptr) {
            ourStr += (root->val + 'a');
            
            ourVec.push_back({ourStr.rbegin(), ourStr.rend()});
            return;
        }

        
        ourStr += (root->val + 'a');
        recurseDown(ourVec, root->left, ourStr);
        recurseDown(ourVec, root->right, ourStr);
        return;
    }
    
    
public:
    string smallestFromLeaf(TreeNode* root) {
        vector<string> emptyVec;
        recurseDown(emptyVec, root, "");
        sort(emptyVec.begin(), emptyVec.end(), [](string A, string B){
		
            return lexicographical_compare(A.begin(), A.end(), B.begin(), B.end());
        });
		
        return emptyVec[0];
    }
};