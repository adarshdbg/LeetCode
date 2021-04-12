class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        vector<bool>vis(n,false);
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
            {
                int j=i;
                int count=0;
                while(1)
                {
                    if(vis[j]==true)
                        break;
                    count++;
                    vis[j]=true;
                    j=nums[j];   
                }
                ans=max(ans,count);
            }
        }
        return ans;
        
    }
};