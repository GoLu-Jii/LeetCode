class Solution {
public:
    vector<vector<int>> ans;

    void combi(int i, vector<int>& temp, vector<vector<int>> & ans, vector<int>& arr, int k){
        if(temp.size() == k){
            ans.push_back(temp);
            return;
        }
        if(i == arr.size())
            return;
        
        combi(i+1, temp, ans, arr, k);

        temp.push_back(arr[i]);
        combi(i+1, temp, ans, arr, k);
        temp.pop_back();
        

    }

    vector<vector<int>> combine(int n, int k) {
        ans.clear();
        vector<int> arr;
        for (int i = 1; i <= n; i++) {
            arr.push_back(i);
        }
        vector<int> temp;
        combi(0, temp, ans, arr, k);
        return ans;
    }
};