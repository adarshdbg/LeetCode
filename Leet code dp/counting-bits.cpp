class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v(num+1);
        int p=1;
        v[0]=0;
        for(int i=1;i<=num;i++)
        {
            int x=log2(i);
           // cout<<x<<" ";
            if(pow(2,x) == i)
            {
                v[i]=1;
                p=1;
            }
            else
            {
                //cout<<p<<" ";
                
                v[i]=v[p]+1;
                p++;
            }
        }
        return v;
    }
};