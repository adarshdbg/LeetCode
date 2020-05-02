static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<3)
            return nums.size();
        int i=0,k=0,j=nums.size()-1,p=0;
        int c=nums[i];
        i+=1;
        while(i<nums.size())
        {    
            if(nums[i]==c)
            {
                k++;
                if(k>1)
                {
                    //cout<<nums[i]<<" ";
                    //cout<<i<<" ";
                    nums.erase(nums.begin()+i,nums.begin()+i+1);
                    p++;
                }
                else
                 i++;
            }
            else
            {
                c=nums[i],k=0,i++;
            
            //cout<<"1"<<" ";
            }
            
        }
        for(int i=0;i<nums.size();i++)
            cout<<nums[i]<<" ";
        return nums.size();
    }
};