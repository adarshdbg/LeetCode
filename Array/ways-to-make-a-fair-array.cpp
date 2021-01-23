class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
         int even=0,odd=0;
        
         for(int i=0;i<nums.size();i++)
         {
             if(i%2==0)
                 even+=nums[i];
             else
                 odd+=nums[i];
         }
         int even1=0,odd1=0,ans=0;
         for(int i=0;i<nums.size();i++)
         {
             if(i%2==0)
             {
                 if(even1+odd-odd1 == odd1+even-even1-nums[i])
                     ans++;
                 
                 even1+=nums[i];
                     
             }
             else
             {
                 if(even1+odd-odd1-nums[i] == odd1+even-even1)
                     ans++;
                 
                 odd1+=nums[i];
             }
         }
        return ans;
    }
};