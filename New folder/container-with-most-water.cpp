int maxArea(vector<int>& h) 
{
        int  n=h.size();
        
        int i=0,j=n-1;
        int ans=0;
        while(i<j)
        {
            ans=max(ans,min(h[i],h[j])*(j-i));
            if(h[i]>h[j])
            {
                j--;
            }
            else
                i++;
        }
        return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        cout<<maxArea(v)<<endl;
    }
}