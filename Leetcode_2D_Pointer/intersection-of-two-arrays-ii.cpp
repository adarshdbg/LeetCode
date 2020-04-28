static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        int m,n,i=0,j=0;
        m=a.size();
        n=b.size();
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int> c;
       while(i<m && j<n)
       {
           if(a[i]>b[j])
           {
               j++;
           }
           else
           {
               if(a[i]<b[j])
               {
                   i++;
               }
               else
               {
                   c.push_back(a[i]);
                   i++;
                   j++;
               }
           }
               
       }
      return c;
    }
};