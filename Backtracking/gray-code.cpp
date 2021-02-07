class Solution {
public:
    void all_sequence(vector<int>& v, bitset<16>&b, int n)
    {
        if(n==0)
        {
            v.push_back(b.to_ullong());
        }
        else
        {
            all_sequence(v, b, n-1);
            b.flip(n-1);
            all_sequence(v,b,n-1);
            
        }
    }
    vector<int> grayCode(int n) {
        vector<int>v;
        bitset<16>b;
        all_sequence(v, b, n);
        return v;
    }
};