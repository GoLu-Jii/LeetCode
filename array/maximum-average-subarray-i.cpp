class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        long long sum = 0;
        long long max_avg = 0;
        while(right < k){
            sum+= nums[right];
            right++;
        }
        max_avg = sum;

        while(right < nums.size()){
            sum -= nums[left];
            left++;
            sum+= nums[right];
            right++;
            max_avg = max(max_avg, sum);
        }
        return (double)max_avg/k;
    }
};