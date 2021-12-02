static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=nums[0],mi=INT_MIN;
        if(nums.size()==1)
            return abs(sum);
        for(int i=1;i<nums.size();i++)
        {
             if(sum<0)
            {
                sum=0;
            }
             mi=max(mi,sum);
            sum+=nums[i];
           
           
        }
         mi=max(mi,sum);
        sum=nums[0];
        int ma=INT_MAX;
        for(int i=1;i<nums.size();i++)
        {
            if(sum>0)
            {
                sum=0;
            }
            ma=min(ma,sum);
            sum+=nums[i];
            
            
        }
        ma=min(ma,sum);
        //cout<<mi<<" "<<ma;
        return max(abs(mi),abs(ma));
    }
};