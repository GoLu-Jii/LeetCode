class Solution {
public:
    int jump(vector<int>& nums) {
        int i = 0;
        int j = nums.size()- 1;
        int maxjump = 0;
        while(j != 0  ){
            if(i + nums[i] >= j){
                j = i;
                maxjump++;
            }
            else i++;
        }
        return maxjump;
        //-------------------------> TLE
    }
};