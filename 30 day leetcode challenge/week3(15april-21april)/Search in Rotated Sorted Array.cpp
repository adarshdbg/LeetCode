class Solution {
public:
    int binaryse(vector<int>&a,int l,int r,int target)
    {
        if(l<=r)
        {
           int m=(l+r)/2;
           if(a[m]==target)
               return m;
            if(a[l]<=a[m])
            {
                if(target>=a[l] && target<=a[m])
                {
                    return binaryse(a,l,m-1,target);
                }
                return binaryse(a,m+1,r,target);
                    
            }
            if (target >= a[m] && target <= a[r]) 
                return binaryse(a, m+1, r, target); 
  
                return binaryse(a, l, m-1, target);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        int j=binaryse(nums,0,n-1,target);
        return j;
    }
};