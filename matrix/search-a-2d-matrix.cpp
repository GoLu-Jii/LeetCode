class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int st = 0;
        int ed = r*c-1;

        while(st <= ed){
            int mid = st + (ed - st)/2;
            int r_val = mid/c;
            int c_val = mid % c;
            int mid_val = matrix[r_val][c_val];
            if(mid_val == target)
                return true;
            else if(mid_val > target)
                ed = mid - 1;
            else
                st = mid + 1;
        }
        return false;
    }
};