static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        arr.insert(arr.begin(), 0);
        for(int i=1;i<arr.size();i++)
        {
            arr[i]^=arr[i-1];
        }
        int ans=0;
        // for(auto i:arr)
        //     cout<<i<<" ";
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                ans+=(j-i-1);
            }
        }
        return ans;
    }
};