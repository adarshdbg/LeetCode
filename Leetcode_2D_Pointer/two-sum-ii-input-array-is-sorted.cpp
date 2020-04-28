static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
     int binary(vector<int>&v,int l,int r,int find)
    {
        if(l>r)
        {
              return -1;
        }
        int mid=(l+r)/2;
        if(v[mid]==find)
        {
                return mid;
        }
        else if(v[mid]>find)
            return binary(v,l,mid-1,find);

        else
        {
            return binary(v,mid+1,r,find);
        }
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        int n=numbers.size();
        for(int i=0;i<n;i++)
        {
            int p=binary(numbers,i+1,n-1,target-numbers[i]);
            if(p>=0)
            {
            v.push_back(i+1);
            v.push_back(p+1);
            }
        }
        return v;
    }
};