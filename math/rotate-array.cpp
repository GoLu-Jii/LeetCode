class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n);

        for(int i = 0; i < nums.size(); i++){
            int location = (k+i)%(nums.size());
            temp[location] = nums[i];

        }
        nums = temp;

    }
};