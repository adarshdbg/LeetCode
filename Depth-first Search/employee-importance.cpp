/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/
static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    unordered_map<int,vector<int>>m;
    unordered_map<int,int>m1;
    int ans=0;
    int getImportance(vector<Employee*> employees, int id) {
        for(const auto &i:employees)
        {
            vector<int>a;
            a=i->subordinates;
            for(auto j:a)
            m[i->id].push_back(j);
            m1[i->id]=i->importance;
        }
         dfs(id);
        return ans;
    }
    void dfs(int id)
    {
        ans+=m1[id];
        for(auto i:m[id])
        {
            dfs(i);
        }
       
    }
};