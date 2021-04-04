class Solution {
public:
    int reinitializePermutation(int n) {
        if (n == 2)
		    return 1;
	    int mod = n - 1;
	    int curr_power = 2;
	    int cnt = 1;
	   
	    while (curr_power != 1)
        {
		    curr_power = (2*curr_power) % mod;
		    cnt += 1;
        }
	    return cnt;
    }
};