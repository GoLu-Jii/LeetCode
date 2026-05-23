class Solution {
public:
    int helper(vector<int>&nums, int k){
        int count = 0;
        int odd = 0;
        int left = 0;
        for(int right = 0; right < nums.size(); right++){
            if(nums[right]%2 != 0) odd++;
            while(odd > k){
                if(nums[left] %2 != 0) odd--;
                left++;
            }
            count = count + right - left + 1;
        }
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {

        int ans = helper(nums, k) - helper(nums, k-1);
        return ans;

        // int odd = 0;
        // int left = 0;
        // int count = 0;

        // for(int right = 0; right < nums.size(); right++){
        //     if(nums[right]%2 != 0) odd++;
        //     while(odd > k){
        //         if(nums[left]%2 != 0) odd--;
        //         left++;
        //     }
        //     if(odd == k) count++;
        // }
        // return count;
    }
};