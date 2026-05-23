class Solution {
public:

    int max_elem(vector<int>& nums){
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxi)
                maxi = nums[i];
        }
        return maxi;
    }

    long long calc_res(vector<int>& nums, int d) {
        long long sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] + d - 1) / d;  // ceiling division
        }
            return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = max_elem(nums);
        int result;        
        while(start <= end){
            int mid = start + (end - start)/2;
            result = calc_res(nums, mid);                
            if(result <= threshold){
                end = mid-1;
            }
            else
                start = mid + 1;
        }
        return start;
    }
};