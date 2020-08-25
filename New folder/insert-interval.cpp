#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>insert(vector<vector<int>> &intervals,vector<int>&newInterval){
	std::vector<vector<int>> answer;
	bool flag=false;

	for(auto i:intervals)
	{
		if(!flag && i[0]>newInterval[1])
		{
			answer.push_back(newInterval);
			answer.push_back(i);
			flag=true;
		}
        else if(!flag && i[1]>=newInterval[0])
        {
        	answer.push_back({min(i[0],newInterval[0]),max(i[1],newInterval[1])});
        	flag=true;
        }
        else if(flag && answer.back()[1]>=i[0])
        	answer.back()[1]=max(answer.back()[1],i[1]);
        else
        	answer.push_back(i);
	}

	if(!flag)
		answer.push_back(newInterval);
	return answer;
}
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
    	insert()
    }
}