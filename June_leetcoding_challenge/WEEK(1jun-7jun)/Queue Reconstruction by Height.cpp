static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    static bool sortPeople(const vector<int>& p1, const vector<int>& p2) 
	{ 
		if (p1[0] != p2[0]) return p1[0] < p2[0]; 

		return p1[1] > p2[1];
	} 

	vector<vector<int>> reconstructQueue(vector<vector<int>>& people) 
	{
		sort(people.begin(), people.end(), sortPeople);

		vector<vector<int>> queue(people.size(), vector<int> (2, 0));

		vector<int> positions;

		for (int i = 0; i < people.size(); i++)
		{
			positions.push_back(i);
		}

		for (int i = 0; i < people.size(); i++)
		{
			//       index       height
			queue[ positions[ people[i][1] ] ] = people[i];

			positions.erase(positions.begin() + people[i][1]);
		}

		return queue;
	}
};