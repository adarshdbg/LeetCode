static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
private:
    int dfs(string airport, vector<string>& output, int counter, 
             unordered_map<string, vector<string>>& map){
        if(counter==0) return 0;
        vector<string>& vec = map[airport];
        for(int i = 0; i<vec.size(); i++){
            string cur = vec[i];
            if(cur=="NULL") continue;
            vec[i] = "NULL";
            if(dfs(cur, output, counter-1, map)==counter-1){
                output.push_back(cur);
                return counter;
            }
            vec[i] = cur;   
        }
        return -1;
    }
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, vector<string>> map;
        int counter  = 0;
        for(auto& vec: tickets){
            map[vec[0]].push_back(vec[1]);
            counter++;
        }
        for(auto& x:map) sort(x.second.begin(), x.second.end());
        vector<string> output;
        dfs("JFK", output, counter, map);
        output.push_back("JFK");   
        reverse(output.begin(), output.end());
        return output;
    }
};