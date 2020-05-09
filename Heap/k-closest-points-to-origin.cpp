static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int n=points.size();
        sort1(points,0, n-1);
        return {points.begin(),points.begin()+K};
    }
    void sort1(vector<vector<int>>&a,int l,int r)
    {
        if(l<r)
        {
            int mid=l + (r-l)/2;
            
            sort1(a,l,mid);
            sort1(a,mid+1,r);
            merge(a,l,mid,r);
        }
        
    }
    void merge(vector<vector<int>>&a,int l,int mid,int r)
    {
        int n=mid-l+1;
        int m=r-mid;
        vector<vector<int>>b(a.begin()+l,a.begin()+mid+1);
        vector<vector<int>>c(a.begin()+mid+1,a.begin()+r+1);
        int i=0,j=0,k=l;
        while(i<n && j<m)
        {
            if(pow(b[i][0],2)+pow(b[i][1],2) <= pow(c[j][0],2)+pow(c[j][1],2))
            {
                a[k][0]=b[i][0];
                a[k++][1]=b[i++][1];
            }
            else
            {
                a[k][0]=c[j][0];
                a[k++][1]=c[j++][1];
            }
        }
        while(i<n)
        {
            a[k][0]=b[i][0];
            a[k++][1]=b[i++][1];
        }
        while(j<m)
        {
            a[k][0]=c[j][0];
            a[k++][1]=c[j++][1];
        }
    }
};