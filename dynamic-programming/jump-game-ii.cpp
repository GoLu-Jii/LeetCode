class Solution {
public:
    int jump(vector<int>& nums) {
        // int i = 0;
        // int j = nums.size()- 1;
        // int maxjump = 0;
        // while(j != 0  ){
        //     if(i + nums[i] >= j){
        //         j = i;
        //         maxjump++;
        //     }
        //     else i++;
        // }
        // return maxjump;
        //-------------------------> TLE

        int currmax = 0;
        int maxi = 0;
        int jump = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            maxi = max(maxi, i + nums[i]);
            if(i == currmax){
                jump++;
                currmax = maxi;
            }
        }
        return jump;
    }
};