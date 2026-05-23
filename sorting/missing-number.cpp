class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int range = nums.size();
        int missing = -1;
        
        for(int i = 0; i <= range; i++){
            int found = 0;
            for(int j = 0; j < range; j++){
                if(i == nums[j])
                    found = 1;
            }
            if(found == 0){
                missing = i;
            }
        }
        return missing;
    }
};