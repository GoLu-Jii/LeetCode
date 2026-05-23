class Solution {
public:
    int findmax(vector<int> &piles){
        int maxi = INT_MIN;
        for(int i = 0; i < piles.size(); i++){
            if(piles[i] > maxi)
                maxi = piles[i];
        }
        return maxi;
    }
    long long total(vector<int>& piles, int k) {
        long long totalhours = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalhours += (piles[i] + k - 1) / k;
        }
        return totalhours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxi = findmax(piles);
        int start = 1;
        int end = maxi;
        int answer = maxi;
        while(start <= end){
            int mid = start + (end - start)/2;
            long long hours = total(piles, mid);

            if(hours <= h){
                end = mid-1;
                answer = mid;
            }
            if(hours > h)
                start = mid + 1;
        }
        return answer;
    }
};