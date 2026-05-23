class Solution {
public:
    int calc(vector<int>& nums, int k){
        unordered_map<int, int>freq;
        int total = 0;
        int left = 0;
        for(int right = 0; right < nums.size(); right++){
            freq[nums[right]]++;
            while(freq.size() > k){
                freq[nums[left]]--;
                if (freq[nums[left]] == 0) {
                    freq.erase(nums[left]);  
                }
                left++;
            }
            total += right - left + 1;
        }
        return total;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int ans = calc(nums, k) - calc(nums, k-1);
        return ans;
    }
};