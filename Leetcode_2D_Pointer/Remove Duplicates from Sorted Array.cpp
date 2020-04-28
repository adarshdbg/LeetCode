class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        int b=nums.size();
        
        int i;
        
        if(b==0 || b==1)
            return b;
        
        for(i=0;i<b-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                nums[j]=nums[i];
                 j++;  
            }
        }           
        
        nums[j++]=nums[b-1];
        return j;
    }
};