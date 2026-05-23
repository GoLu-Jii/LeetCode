class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < n-2; i++){
            int j = i+1;
            int k = n-1;
            while(j < k){
                int current_sum = nums[i] + nums[j] + nums[k];
                if(abs(target - current_sum) < abs(target - sum)){
                    sum = current_sum;
                }
                if(current_sum > target)
                    k--;
                else if(current_sum < target)
                    j++;
                else
                    return target;
            }
        }
        return sum;
    }
};