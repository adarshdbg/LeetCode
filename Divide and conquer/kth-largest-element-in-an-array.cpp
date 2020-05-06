static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         kth(nums,0,nums.size()-1);
        return nums[nums.size()-k];
    }
    void kth(vector<int>&a,int l,int r)
    {
        
        if(l<r)
        {
            int p=partition(a,l,r);
            
            kth(a,l,p-1);
            kth(a,p+1,r);
        }
    }
    int partition(vector<int>&a,int l,int r)
    {
        int h=a[r];
        
        int j=l-1;
        
        for(int i=l;i<r;i++)
        {
            if(a[i]<=h)
            {
                j++;
                swap(a[i],a[j]);
            }
        }
        swap(a[r],a[j+1]);
        return j+1;
    }
};