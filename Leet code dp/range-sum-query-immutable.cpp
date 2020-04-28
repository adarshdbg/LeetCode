class NumArray {
public:
    //int dp[n];
    vector<int>ll;
    
    NumArray(vector<int>& nums) {
        int n=nums.size();
        ll.resize(n);
        if(n>0)
        {
        ll[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            ll[i]=ll[i-1]+nums[i];
        }
        }
    }
    
    int sumRange(int i, int j) {
        if(ll.size()==0)
            return 0;
        if(i>0)
        return ll[j]-ll[i-1];
        else
            return ll[j];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */