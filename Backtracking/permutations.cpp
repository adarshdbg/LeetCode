class Solution {
public:
    int n;
bitset<10000> chosen;
vector<vector<int> > ans;
vector <int>v;
   void ff(vector<int>& nums){
    if(v.size() ==n){
        ans.push_back(v); return;
    }
    for(int i=0;i<n;i++){
        if(chosen[i]) continue;
        chosen[i]=true;
        v.push_back(nums[i]);
        ff(nums);
        chosen[i]=false;
        v.pop_back();
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    n = nums.size();
    
    ff(nums);
    return ans;
}
};