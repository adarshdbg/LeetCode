class Solution {
public:
    double knightProbability(int N, int K, int r, int c) {
         vector<double>dp(K+1,0.0);
         dp[0]=1.0;
        // for(int i=1;i<=K+1;i++)
        //     dp[i]=0.0;
        // for(int i=0;i<=K;i++)
        //     cout<<dp[i]<<" ";
         pair<int,int>p;
        set<pair<int,int>>u;
         set<pair<int,int>>v;
         set<pair<int,int>>w;
          p=make_pair(r,c);
         v.insert(p);
         double ans=0.0,ans1=0;
         for(int i=1;i<=K;i++)
         {
             for(auto it=v.begin();it!=v.end();it++)
             {
                 int r=it->first;
                 int q=it->second;
                 //cout<<r<<" "<<q<<endl;
                 if(r-1>=0 && q-2>=0 && r-1<N && q-2<N)
                      p=make_pair(r-1,q-2),w.insert(p),u.insert(p);
                 if(r+1>=0 && q-2>=0 && r+1<N && q-2<N)
                      p=make_pair(r+1,q-2),w.insert(p),u.insert(p);
                 if(r-1>=0 && q+2>=0 && r-1<N && q+2<N)
                      p=make_pair(r-1,q+2),w.insert(p),u.insert(p);
                 if(r+1>=0 && q+2>=0 && r+1<N && q+2<N)
                      p=make_pair(r+1,q+2),w.insert(p),u.insert(p);
                 if(r-2>=0 && q+1>=0 && r-2<N && q+1<N)
                      p=make_pair(r-2,q+1),w.insert(p),u.insert(p);
                 if(r-2>=0 && q-1>=0 && r-2<N && q-1<N)
                      p=make_pair(r-2,q-1),w.insert(p),u.insert(p);
                 if(r+2>=0 && q+1>=0 && r+2<N && q+1<N)
                      p=make_pair(r+2,q+1),w.insert(p),u.insert(p);
                 if(r+2>=0 && q-1>=0 && r+2<N && q-1<N) 
                      p=make_pair(r+2,q-1),w.insert(p),u.insert(p);
                 
                 if(!w.empty())
                 ans=ans+ w.size();
                 //cout<<ans<<" ";
                 w.clear();
             }
             //cout<<ans<<" "<<v.size()<<" ";
             if(!v.empty())
             dp[i]=(ans)/(float(8.0)*(v.size()));
             //cout<<dp[i]<<" ";  
            
             dp[i]=dp[i]*dp[i-1];
             
             ans=0.0;
             
             v.clear();
             if(!u.empty())
             v.insert(u.begin(),u.end());
             // for(auto it1=v.begin();it1!=v.end();it1++)
             //     cout<<it1->first<<" "<<it1->second<<endl;
             //cout<<v.size()<<" ";
             //cout<<endl;
             u.clear();       
         }
        // for(int i=0;i<=K;i++)
        //     cout<<dp[i]<<" ";
        //cout<<dp[2]<<endl;
        return dp[K];
    }
};