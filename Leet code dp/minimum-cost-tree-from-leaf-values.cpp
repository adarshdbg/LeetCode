class Solution {
public:
   int mctFromLeafValues(vector<int>& arr) {
        int sum = 0;
        while (arr.size() > 1){
            int p1 = 0, p2 = 1;
            int mi = arr[p1]*arr[p2];
            for (int i = 2; i < arr.size(); i++){
                if (arr[i]*arr[i-1] < mi){
                    mi= arr[i]*arr[i-1];
                    p1 = i-1;
                    p2 = i;
                }
            }
            sum += mi;
            int bigleaf = max(arr[p1],arr[p2]);
            if (bigleaf == arr[p1]){
                arr.erase(arr.begin()+p2);
            } else {
                arr.erase(arr.begin()+p1);
            }
        }
        return sum;
    }
};