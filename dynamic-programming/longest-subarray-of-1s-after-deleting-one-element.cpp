class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int max_len = 0;
        unordered_map<bool, int>freq;
        freq[0] = 0;
        freq[1] = 0;

        for(int right = 0; right < nums.size(); right++){
            freq[nums[right]]++;
            
            while(freq[0] > 1){
                freq[nums[left]]--;
                left++;
            }
            int len = right - left + 1;
            max_len = max(max_len , len);

        }
        return max_len - 1;
    }
};