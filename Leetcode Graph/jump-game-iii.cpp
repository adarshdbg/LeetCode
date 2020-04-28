static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        queue<int> q;
        vector<bool>v(n,false);
        q.push(start);
        //v[start]=true;
        while(!q.empty())
        {
           queue<int>p;
            while(!q.empty())
            {

                if(!v[q.front()])
                {
                    //cout<<"1"<<" ";
                    v[q.front()]=true;
                    if(q.front() + arr[q.front()]  < n)
                    {
                        p.push(q.front() + arr[q.front()]);
                        // cout<<"1"<<" ";
                    }
                    if(q.front() - arr[q.front()]  >= 0)
                    {
                        // cout<<"1"<<" ";
                        p.push(q.front() - arr[q.front()]);
                    }
                    q.pop();
                }
                else
                    q.pop();
            }
            swap(q,p);
            //p.size()=0;
            
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0 && v[i]==true)
                return true;
        }
        return false;
    }
};