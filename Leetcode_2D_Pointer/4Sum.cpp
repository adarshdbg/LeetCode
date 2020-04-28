#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i,j,k,l,p=0;
        int n=nums.size();
    
       // vector<int> a;
        map<vector<int>,int> m;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                    
                {
                    
                    for(l=k+1;l<n;l++)
                    {
                      if(nums[i]+nums[j]+nums[k]+nums[l]==target)
                      {
                        vector<int> a;  
                         // a.insert({nums[i], nums[j], nums[k], nums[l]});
                          a.push_back(nums[i]);
                          a.push_back(nums[j]);
                          a.push_back(nums[k]);
                          a.push_back(nums[l]);
                            
                          sort(a.begin(), a.end());    
                                       m[a]++;
                      }
                    }
                }
                
            }
            
            
        }
                                      
   
        vector<vector<int>>ans;
        for(auto it =m.begin(); it != m.end(); it++ )
             ans.push_back(it->first);                               
        return ans;
  }
};