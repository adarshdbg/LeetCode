class Solution {
public:
    int missingNumber(vector<int>& n) {
        int p;
        p=accumulate(n.begin(),n.end(),0);
        int q,k=n.size()+1;
        q=k*(k-1)/2;
        if(p==q)
            return 0;
        else
            return q-p;
    }
};