static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int next(vector<int>&a,int i)
    {
        int n=a.size();
        return (n+i+a[i])%n;
    }
    bool circularArrayLoop(vector<int>& nums) {
        unordered_map<int,int>m;
        int j=0;
        int n=nums.size();
        for(int &num: nums)
            num %= n;
        for(int i=0;i<nums.size();i++)
        {
            int slow=i;
            int fast=i;
        while(nums[slow]*nums[next(nums,fast)]>0 && nums[slow]*nums[next(nums,next(nums,fast))]>0 )
            {
                slow = next(nums,slow);
                fast = next(nums,next(nums,fast));
                if(slow==fast)
                {
                    if(slow==next(nums,slow))
                        return false;
                    return true;
                }
             
            }
            int j=i;
            int p=nums[j];
            while(nums[j]*p > 0)
            {
                
                int k=next(nums,j);
                nums[j]=0;
                j=k;
            }
        }
        return false;
    }
};