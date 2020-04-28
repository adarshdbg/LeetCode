class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int>s(arr.begin(),arr.end());
        int count=0;
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto& it:m)
        {
            if(s.find(it.first + 1)!=s.end())
                count+=m[it.first];
        }
        return count;
    }
};