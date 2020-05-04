static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       if(nums.size() <=2) return {};
    vector<vector<int> > rtn;
    sort(nums.begin(), nums.end());
    
    for(int i =0; i < nums.size();)
    {
        int start = i+1, end = nums.size()-1;

        while(start < end
             ){
            if(nums[i]+nums[start]+nums[end] == 0)
            {
                rtn.push_back({nums[i],nums[start],nums[end]});
                start++;
                end--;
                while((start < end) && nums[start] == nums[start-1])
                    start++;
                while((start < end) && nums[end] == nums[end+1]) 
                    end--;

            }
            else if(nums[i]+nums[start]+nums[end]<0)
            {
                start++;
                while((start < end) && nums[start] == nums[start-1])
                    start++;
            }else
            {
                end--;
                while((start < end) && nums[end] == nums[end+1]) 
                    end--;
            }
        }
        
        i++;
        while((i < nums.size()) && nums[i] == nums[i-1])
            i++;
        
    }
    return rtn;
    }
};