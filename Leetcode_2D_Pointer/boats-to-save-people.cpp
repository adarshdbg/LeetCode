static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1;
        int ans=0;
        while(i<j)
        {
            if(people[i]+people[j]<=limit)
                ans+=1,i++,j--;
            else
                j--;
        }
        return people.size() - 2*ans + ans;  
    }
};