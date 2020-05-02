class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = (int)s.length();
    unordered_map<char, int> count;  // character frequencies in the sliding window
    int max_length = 0;              // longest consecutive substring (after operations) so far
    int max_count = 0;               // most frequent char occurence in the sliding window
    // j: sliding window start, i: sliding window end
    for (int i = 0, j = 0; i < n; ++i) {        // 'i' loops through the string normally
      count[s[i]]++;                            // update current char count
      max_count = max(max_count, count[s[i]]);  // whether current char has higher freq
      while (i - j + 1 - max_count > k) {       // compare no. of operations we must do with k
        count[s[j]]--;                          // decrease s[j]'s freq because we gon shrink
        j++;                                    // shrink window on the left
      }
      max_length = max(max_length, i - j + 1);
    }
    return max_length;
    }
};