class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int n=k;
        for(auto &i:m)
        {
            if(m[i.first]>0)
            {
                int p=m[i.first];
                while(n--)
                {
                    if(m[i.first+k-1-n]>=p)
                    {
                        m[i.first+k-1-n]-=p;
                    }
                    else
                        return false;
                }
                n=k;
            }
        }
        return true;
    }
};