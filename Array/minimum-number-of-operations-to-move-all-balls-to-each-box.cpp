class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        
        vector<int>ans(n,0);
        
        int k=0,j=0,l=0,r=0;
        for(int i=0;i<n;i++)
        {
            if(boxes[i]=='1')
            {
                j++;
                r=r+i;
            }
        }
        //cout<<r<<" "<<j;
        for(int i=0;i<n;i++)
        {
            ans[i]=r+l;
            
            if(boxes[i]=='1')
            {
                j--;
                k++;
            }
            r=r-j;
            l=l+k;
        }
        return ans;
        
    }
};