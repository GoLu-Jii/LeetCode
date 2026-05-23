class Solution {
public:
    vector<vector<int>> result;

    void helper(int i, vector<int>& temp, vector<int> &arr, int target){
        if(target == 0){
            result.push_back(temp);
            return;
        }
        if(target < 0)
            return;

        if(i == arr.size())
            return;

        helper(i+1, temp, arr, target);

        temp.push_back(arr[i]);
        helper(i, temp, arr, target - arr[i]);
        temp.pop_back();
        
    }

    // helper(vector<vector<int>>& result, vector<int>& candidates, int target){
    //     vector<int> ans;
    //     if(target < 0){
    //         return 
    //     }
    //     if(target == 0){
    //         return;
    //     }
    //     int i = 0;
    //     while(target >= 0){
    //         target -= candidates[i];
    //         if(target >= 0){
    //             ans.push_back(cnadidates[i]);
    //         }
    //         else{
    //             return helper(result, candidates)
    //         }
    //     }
    // }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        result.clear();

        vector<int> temp;

        helper(0,temp, candidates, target);

        return result;
    }
};