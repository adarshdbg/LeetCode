#include <iostream> 
#include <bits/stdc++.h>
#include <vector> 
#include <algorithm> 
#include <string>
#include <cmath>
#include <iomanip> 
#include<climits> 
#include <utility>   
#include <set>
#include <numeric> 
#include <iterator>
#include <map> 
using namespace std; 
#define ll long long int
#define M 1000000007

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int n;
    cin>>n;
    int dp[n+1];
    dp[0]=1;
    if(n==1)
    cout<<"1"<<endl;
    else if(n==2)
    cout<<"2"<<endl;
    else if(n==3)
    cout<<"4"<<endl;
    else if(n==4)
    cout<<"8"<<endl;
    else if(n==5)
    cout<<"16"<<endl;
    else{
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    dp[4]=8;
    dp[5]=16;
    dp[6]=(dp[5])+(dp[4])+(dp[3])+(dp[2])+(dp[1])+dp[0];
    for(int i=7;i<=n;i++)
    {
        dp[i]=((dp[i-1]%M)+(dp[i-2]%M)+(dp[i-3]%M)+(dp[i-4]%M)+(dp[i-5]%M)+(dp[i-6]%M))%M;
    }
    cout<<dp[n]<<endl;
    }
        
    
  
}