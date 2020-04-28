class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),p=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                p++;
        }
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                j++;
                //cout<<i<<" "<<j-1<<" ";
            }
        }
        for(int i=j;i<n;i++)
        {
            
                nums[i]=0;
            
        }
        
    }
};