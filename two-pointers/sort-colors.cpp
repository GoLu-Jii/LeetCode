class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int first = 0;
        int last = n-1;
        int mid = 0;

        while(mid <= last){
            if(nums[mid] == 0){
                swap(nums[first], nums[mid]);
                first++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[last]);
                last--;
            }
        } 
    }
};