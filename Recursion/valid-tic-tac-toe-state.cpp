static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool validTicTacToe(vector<string>& b) {
        int cx=cnt(b,'X'),co=cnt(b,'O');
        bool wx=win(b,'X'),wo=win(b,'O');
        if (wx && wo) return false;
        if (wx) return cx==co+1;
        if (wo) return cx==co;
        return cx==co+1 || cx==co;
    }
private:
    int cnt(vector<string>& b, char c){
        int res=0;
        for (auto& s: b) res+=count(s.begin(),s.end(),c);
        return res;
    }
    bool win(vector<string>& b, char c){
        for (int i=0; i<3; ++i) if (b[i][0]==c && b[i][1]==c && b[i][2]==c) return true;
        for (int j=0; j<3; ++j) if (b[0][j]==c && b[1][j]==c && b[2][j]==c) return true;
        return (b[0][0]==c && b[1][1]==c && b[2][2]==c)
            || (b[2][0]==c && b[1][1]==c && b[0][2]==c);
    }
};