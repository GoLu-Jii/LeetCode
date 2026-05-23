class Solution {
public:
    vector<vector<int>> result;

    void subset(vector<int> &temp, vector<int> &nums, int start){
        
        result.push_back(temp);
        
        for(int i = start; i < nums.size(); i++){
            temp.push_back(nums[i]);
            subset(temp, nums, i+1);
            temp.pop_back();
        }

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        result.clear();
        
        vector<int> temp;

        subset(temp, nums, 0);
        
        return result;
    }
};