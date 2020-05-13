class Solution {
public:
    void dfs(vector<int> &nums, vector<vector<int>> &res, vector<int> &path, int i)
    {
        
        res.push_back(path);
        
        
        if(path.size() == nums.size())
            return;
        
        
        for(i; i < nums.size(); i++)
        {
            
            path.push_back(nums[i]);
            dfs(nums, res, path, i+1);
            
            
            path.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        dfs(nums, res, path, 0);
        
        return res;
    }
};