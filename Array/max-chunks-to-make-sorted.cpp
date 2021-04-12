class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ans=0,k=0;
        
        for(int i=0;i<arr.size();i++)
        {
            ans=max(ans,arr[i]);
            
            if(ans==i)
                k++;
        }
        return k;
    }
};