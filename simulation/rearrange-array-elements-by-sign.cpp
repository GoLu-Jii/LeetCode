class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        int i = 0, j = 1;
        int current = 0;
        while(current != n){
            if(nums[current] < 0){
                arr[j] = nums[current];
                j+=2;
                current++;
            }
            else{
                arr[i] = nums[current];
                i+=2;
                current++;
            }
        }
        return arr;
    }
};