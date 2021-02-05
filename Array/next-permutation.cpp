class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1;
        
        while(i>0)
        {
            if(nums[i]>nums[i-1])
                break;
            i--;
        }
        if(i==0)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        int j=i-1;
        i=nums.size()-1;
        while(i!=j)
        {
            if(nums[i]>nums[j])
            {
                break;
            }
            i--;
        }
        swap(nums[i],nums[j]);
        
        reverse(nums.begin()+j+1,nums.end());
        
        
    }
};