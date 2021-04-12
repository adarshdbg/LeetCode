class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<vector<int>>ans;
        int n=restaurants.size();
        for(int i=0;i<n;i++)
        {
            if(veganFriendly==1)
            {
                if(restaurants[i][2]==veganFriendly && restaurants[i][3]<=maxPrice && restaurants[i][4]<=maxDistance)
                ans.push_back(restaurants[i]);
            }
            else
                if(restaurants[i][3]<=maxPrice && restaurants[i][4]<=maxDistance)
                ans.push_back(restaurants[i]);
        }
        sort(ans.begin(),ans.end(),[](vector<int>&a, vector<int>&b){
           return a[1]!=b[1]?a[1]>b[1]:a[0]>b[0]; 
        });
        vector<int>ans1;
        for(int i=0;i<ans.size();i++)
            ans1.push_back(ans[i][0]);
        return ans1;
            
    }
};