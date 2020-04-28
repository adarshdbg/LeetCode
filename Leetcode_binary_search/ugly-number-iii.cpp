class Solution {
public:
    long long lcm(long long a,long long b){
        return (a*b)/__gcd(a,b);
    }
    
    long long func(long long x,long long a,long long b,long long c){
        long long ans = x/a + x/b + x/c - x/lcm(a,b) - x/lcm(b,c) - x/lcm(c,a) + x/lcm(a,lcm(b,c));
        return ans;
    }
    
    int nthUglyNumber(int n, int a, int b, int c) {
        long long low = min(a,min(b,c)),high = INT_MAX,mid;
        while(low<high){
            mid = (low+high)/2;
            if(func(mid,a,b,c)>=n){
                high = mid-1;
            }
            else if(func(mid,a,b,c)<n){
                low = mid+1;
            }
        }
        while(func(mid,a,b,c)<n) mid++;
        while(func(mid,a,b,c)>=n) mid--;
        return mid+1;
    }
};