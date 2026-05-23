class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int st = 0, ed = n-1;
        
        while(st < ed ){
            int mid = st + (ed - st) / 2;
            if(mid % 2 == 1){
                mid--;
            }
            if(nums[mid] == nums[mid + 1]){
                st = mid + 2;
            }
            else{
                ed = mid;
            }
        }

        return nums[st];

    }
};