static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class NumArray {
public:
    vector<int>v;
    vector<int>a;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        v.resize(4*n);
        buildtree(nums,v,0,n-1,0);
        // cout<<"1"<<" ";
        a=nums;
         
    }
    void buildtree(vector<int>&nums,vector<int>&v,int l,int r,int index)
    {
        if(r<l)
            return ;
        if(l==r)
        {
            v[index]=nums[l];
            return;
        }
        
        int mid=l + (r-l)/2;
        buildtree(nums,v,l,mid,index*2+1);
        buildtree(nums,v,mid+1,r,index*2 + 2);
        v[index]=v[index*2+1]+v[index*2+2];
        
    }
    void update(int i, int val) {
        int n=v.size()/4;
        updatetree(a,v,0,n-1,i,0,val);
        
    }
    void updatetree(vector<int>&nums,vector<int>&v,int l,int r,int i,int index,int val)
    {
        if(i<l || i>r)
            return ;
        if(l==r)
        {
            nums[i]=val,v[index]=nums[l];
            return ;
        }
        
        
        int mid=l + (r-l)/2;
        updatetree(nums,v,l,mid,i,index*2+1,val);
        updatetree(nums,v,mid+1,r,i,index*2 + 2,val);
        v[index]=v[index*2+1]+v[index*2+2];
        
    }
    int sumRange(int i, int j) {
        int n=v.size()/4;
        return sum(v,i,j,0,n-1,0);
    }
    int sum(vector<int>&v,int i,int j,int l,int r,int index)
    {
        if(i>r || j<l)
            return 0;
        
        if(l==r)
        {
            return v[index];
        }
        
        int mid=l + (r-l)/2;
        int left=sum(v,i,j,l,mid,2*index+1);
        int right=sum(v,i,j,mid+1,r,2*index +2);
        return left+right;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */