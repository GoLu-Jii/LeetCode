class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        
        while(st <= end){
            int mid = st + (end-st)/2;
            if(target == nums[mid]){
                return true;
            }
            if (nums[st] == nums[mid] && nums[mid] == nums[end]) {
                st++;
                end--;
            }
            else if(nums[st] <= nums[mid]){
                if(target >= nums[st] && target < nums[mid])
                    end = mid-1;
                else
                    st = mid + 1;
            }
            else{
                if(target <= nums[end] && target > nums[mid])
                    st = mid + 1;
                else{
                    end = mid - 1;
                }
            }
        }
        return false;
    }
};