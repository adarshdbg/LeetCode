#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<bool>vis;
string p="";
vector<string>ans;
void solve(string &s,int i)
{
    if(s.size()==p.size())
    {
        ans.push_back(p);
        return;
    }
    int n=s.size();
    for(int j=i;j<i+n;j++)
    {
        if(!vis[j%n])
        {
            p.push_back(s[j%n]);
            vis[j%n]=true;
            solve(s,(j+1)%n);
            p.pop_back();
            vis[j%n]=false;
        }
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	     p="";
	    vis.resize((int)s.size(),false);
	    ans.clear();
	    solve(s,0);
	    sort(begin(ans),end(ans));
	    for(auto &i:ans)
	    {
	       cout<<i<<" "; 
	    }
	    cout<<endl;
	}
	return 0;
}#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<bool>vis;
string p="";
vector<string>ans;
void solve(string &s,int i)
{
    if(s.size()==p.size())
    {
        ans.push_back(p);
        return;
    }
    int n=s.size();
    for(int j=i;j<i+n;j++)
    {
        if(!vis[j%n])
        {
            p.push_back(s[j%n]);
            vis[j%n]=true;
            solve(s,(j+1)%n);
            p.pop_back();
            vis[j%n]=false;
        }
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	     p="";
	    vis.resize((int)s.size(),false);
	    ans.clear();
	    solve(s,0);
	    sort(begin(ans),end(ans));
	    for(auto &i:ans)
	    {
	       cout<<i<<" "; 
	    }
	    cout<<endl;
	}
	return 0;
}