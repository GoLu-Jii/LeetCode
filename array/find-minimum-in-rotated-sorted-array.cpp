class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int st = 0, ed = n-1;
        int mid = st + (ed - st)/2;
        int ans = nums[0];

        while(st <= ed){
            mid = st + (ed - st)/2;

            if(nums[st] <= nums[ed]){
                return nums[st];
            }

            if(mid != 0 && nums[mid] < nums[mid - 1]){
                return nums[mid];
            }
            else if(nums[mid] < nums[ed]){
                ed = mid - 1;
            } else{
                st = mid + 1;
            }
        }
        return -1;

        // while(st <= ed){
        //     mid = st + (ed - st)/2;
            
        //     if(nums[st] <= nums[ed]){
        //         ans = min(ans, nums[st]);
        //         break;
        //     }

        //     if(nums[mid] > nums[ed]){
        //         st = mid + 1;
        //     }
        //     else{
        //         ed = mid - 1;
        //     } 
        //     ans = min(nums[mid], ans);

        // }
        // return ans;
    }
};