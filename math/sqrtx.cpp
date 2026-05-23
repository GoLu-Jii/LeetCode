class Solution {
public:
    int mySqrt(int x) {
        int st = 0, ed = x - 1, ans = 0;
        if(x == 1 || x == 0){
                return x;
            }


        while(st <= ed){

            int mid = st + (ed - st)/2;

            long long sq = 1LL * mid * mid;


            if(sq == x){
                return mid;
            }
            else if(sq < x){
                ans = mid;
                st = mid + 1;
            }
            else{
                ed = mid - 1;
            }
        }
        return ans;

        // if (x == 0 || x == 1)
        //     return x;

        // int st = 1, ed = x, ans = 0;

        // while (st <= ed) {
        //     int mid = st + (ed - st) / 2;

        //     // Use long to prevent overflow
        //     long long sq = 1LL * mid * mid;

        //     if (sq == x)
        //         return mid;
        //     else if (sq < x) {
        //         ans = mid;      // mid could be the answer
        //         st = mid + 1;
        //     }
        //     else {
        //         ed = mid - 1;
        //     }
        // }

        // return ans;

    }
};