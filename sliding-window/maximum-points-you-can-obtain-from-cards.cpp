class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        // int i = 0;
        // int j = cardPoints.size();
        // long long sum = 0;
        // int count = 0;
        // while(count < k && i < cardPoints.size() && j > -1){
        //     long long maxi = max(cardPoints[i], cardPoints[j]);
        //     sum+= maxi;
        //     if(cardPoints[i] == cardPoints[j]) i++;
        //     else if(cardPoints[i] > cardPoints[j]) i++;
        //     else j--;
        //     count++;
        // }
        // return sum;

        long long sum = 0;
        for(int i = 0; i < cardPoints.size(); i++){
            sum += cardPoints[i];
        }
        int left = 0;
        int i = 0;
        long long min_sum = 0;
        long long current_sum = 0;
        int n = cardPoints.size();
        int window_size = n - k;

        while(i < window_size){
            min_sum += cardPoints[i];
            current_sum += cardPoints[i];
            i++;
        }
        for(int right = window_size; right < cardPoints.size(); right++){
            current_sum = current_sum + cardPoints[right] - cardPoints[right - window_size];
            min_sum = min(min_sum , current_sum);
        }
        long long ans = sum - min_sum;
        return ans;
    }
};