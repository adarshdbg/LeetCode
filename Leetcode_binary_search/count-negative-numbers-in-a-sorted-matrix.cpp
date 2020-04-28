static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int binary(vector<int>&v,int l,int r,int n)
    {
        
            if(l==r)
            {
                if(v[l]<0)
                    return l;
                else
                    return n;
            }
                
          
            int mid=l + (r-l)/2;
            if(v[mid]<0)
            {
                if (mid - 1 >= 0 && v[mid - 1] >= 0) 
                { 
                    return mid; 
                } 
                else if (mid == 0) 
                { 
                    return mid; 
                } 
                else
                return binary(v,0,mid-1,n);
            }
            else
                return binary(v,mid+1,r,n);
            
            
    
        
    }
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        //cout<<n<<" ";
        for(int i=0;i<n;i++)
        {
            cout<<binary(grid[i],0,m-1,m)<<" ";
            ans=ans+(m - binary(grid[i],0,m-1,m));
        }
        return ans;
    }
};