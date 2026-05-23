class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0;
        int ed = nums.size() - 1;
         
        while(st <= ed){
            int mid = st + (ed - st)/2;

            if(nums[mid] >= target)
                ed = mid - 1;
            else
                st = mid + 1;
        }
        if(nums[st] == target){
            return st;
        }
        else
            return st;
    }
};