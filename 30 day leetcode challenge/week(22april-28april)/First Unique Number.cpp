static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class FirstUnique {
public:
    unordered_map<int,int>m;
    vector<int>v;
    int j=0;
    FirstUnique(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
           
                m[nums[i]]++;
        }
        v=nums;
    }
    
    int showFirstUnique() {
        while(j<v.size())
        {
            if(m[v[j]]<2)
                return v[j];
            else
                j++;
        }
        return -1;
    }
    
    void add(int value) {
                
        if(m[value]<1)
        {
            v.push_back(value);
        }
        m[value]++;
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */