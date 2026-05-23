class Solution {
public:
    bool canJump(vector<int>& nums) {
        int target = nums.size() - 1;
        int i = target - 1;
        while(i >= 0){
            if((i + nums[i]) >= target){
                target = i;
            }
            i--;
        }
        if(target == 0) return true;
        else return false;
    }
};