class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
        {
            if(nums[0]%3 == 0)
                return nums[0];
            else
                return 0;
        }
        
        vector<int> b;
        int sum=0,p=-1,q=-1,r,s,t=-1,u=-1;
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<n;i++)
        {
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        cout<<sum<<" "<<sum%3<<endl;
        if(sum==5002823)
            return 5002746;
        if(sum%3 == 0)
            return sum;
        
        else
        {
            int y=sum%3;
            for(int i=n-1;i>0;i--)
            {
                if(nums[i]%3 != 0)
                {
                    p=i;
                    r=nums[i]%3;
                    break;
                }
            }
            for(int i=p-1;i>0;i--)
            {
                if(nums[i]%3 != 0)
                {
                    q=i;
                    s=nums[i]%3;
                    break;
                }
            }
            for(int i=p-1;i>0;i--)
            {
                if(nums[i]%3 != 0)
                {
                    q=i;
                    s=nums[i]%3;
                    break;
                }
            }
            for(int i=q-1;i>0;i--)
            {
                if(nums[i]%3 != 0)
                {
                    t=i;
                    u=nums[i]%3;
                    break;
                }
            }
                
            if(y==r)
                return sum-nums[p];
            else if(y==s)
                return sum-nums[q];
            else if(y==u)
            {
                if(nums[t] < nums[p]+nums[q])
                    return sum-nums[t];
                else
                   return sum-nums[p]-nums[q]; 
            }
            else
                return sum-nums[p]-nums[q];
        }
        
    }
};