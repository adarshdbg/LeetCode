static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int sum=0;
        for(int i=0;i<shift.size();i++)
        {
            if(shift[i][0]==0)
            {
                sum=sum-shift[i][1];
            }
            else
            {
                sum=sum+shift[i][1];
            }
        }
       
        
        // cout<<sum<<endl;
        if(sum<=0)
        {
            sum=abs(sum) % s.size();
            sum=abs(sum);
            reverse(s.begin(),s.begin()+sum);
            reverse(s.begin()+sum,s.end());
            reverse(s.begin(),s.end());
        }
        else
        {
            sum=abs(sum) % s.size();
            reverse(s.begin(),s.end());
            reverse(s.begin(),s.begin()+sum);
            reverse(s.begin()+sum,s.end());
        }
        return s;
    }
};