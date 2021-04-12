class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(m[nums[i]*nums[j]]>=1)
                    ans+=(8*(m[nums[i]*nums[j]]));
                m[nums[i]*nums[j]]++;
            }
        }
        return ans;
    }
};