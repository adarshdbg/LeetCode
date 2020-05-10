static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
    struct compare {
        bool operator() (pair<int, int>p1, pair<int, int>p2) {
            return p1.first > p2.first;
        }
    };
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        
        int p = primes.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, compare>pq;
        vector<int>index(p, 1);
        
        for (int i = 0; i < p; i++)
            pq.push(make_pair(primes[i], i));
        
        vector<int>ugly(n+1, 0);
        ugly[1] = 1;
        int k = 2;
        
        while (k <= n) {
            ugly[k] = pq.top().first;            
            while (!pq.empty() && ugly[k] == pq.top().first) {
                pair<int, int>p = pq.top();
                pq.pop();
                index[p.second]++;
                p.first = ugly[index[p.second]]*primes[p.second];
                pq.push(p);
            }

            k++;
        }
            
        return ugly[n];
    }
};