static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    
    char nextGreatestLetter(vector<char>& letters, char target) {
       int l=0, r=letters.size()-1;
	if(letters[l]>target || letters[r]<target) return letters[l];
	
	while(l<r){
	
		int mid =l+(r-l)/2;
		
		if(letters[mid]<=target && letters[mid+1]>target) return letters[mid+1];
		else if(letters[mid]<=target) l=mid+1;
		else r=mid;
		
	}
	
	return letters[0];
    }
};