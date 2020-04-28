class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        int i=0,j=0,k=0;
        vector<int> a(m+n);
        
        while(i<m && j<n)
        {
            if(n1[i]<=n2[j])
            {
                a[k]=n1[i];
                i++;
                k++;
            }
            else if(n1[i]>=n2[j])
            {
                a[k]=n2[j];
                j++;
                k++;
            }
            
            
        }
        while(i<m)
        {
            a[k++]=n1[i];
            i++;
            
        }
        while(j<n)
        {
            a[k++]=n2[j];
            j++;
            
        }
        n1.resize(n+m);
       for(int i=0;i<n+m;i++)
       {
           n1[i]=a[i];
       }
        
        
    }
};