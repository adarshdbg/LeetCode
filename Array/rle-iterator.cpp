class RLEIterator {
public:
    vector<int>ans;
    int j=0,i=0;
    RLEIterator(vector<int>& A) {
        ans=A;
    }
    
    int next(int n) {
        while(i<ans.size())
        {
            if(j+n>ans[i])
            {
                n-=(ans[i]-j);
                j=0;
                i+=2;
            }
            else
            {
                j+=n;
                return ans[i+1];
            }
        }
        return -1;
    }
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(A);
 * int param_1 = obj->next(n);
 */