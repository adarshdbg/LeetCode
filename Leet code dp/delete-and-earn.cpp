class Solution {
public:
    int deleteAndEarn(vector<int>& nums) { 
        int n=nums.size();
        int skip[10001]={0};
        int ans[10001]={0};
                                          
        for(int i=0;i<nums.size();i++){
            skip[nums[i]]+=nums[i];
        }
        ans[0]=skip[0];
        ans[1]=max(skip[0],skip[1]);
        int m=max(ans[0],ans[1]);
        for(int j=2;j<10001;j++){
            ans[j]=max(ans[j-2]+skip[j],ans[j-1]);
            m=max(ans[j],m);
        }
                                          
        return m;
    }
};