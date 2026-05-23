class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int max_len = 0;
        int len = 0;
        unordered_map<char, int>freq;

        for(int right = 0; right < s.length(); right++){
            freq[s[right]]++;
            
            while(freq[s[right]] > 1){
                freq[s[left]]--;
                left++;
            }
            len = (right - left + 1);
            max_len = max(max_len, len);
        }
        return max_len;
    }
};