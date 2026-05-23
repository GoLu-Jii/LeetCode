class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left = 0;
        long long sum = 0;
        int count = 0;
        int right = 0;
        while(right < k){
            sum += arr[right];
            right++;
        }
        if((long long)sum/k >= (long long)threshold){
            count++;
        }

        for(int right = k; right < arr.size(); right++){
            sum = sum + arr[right] - arr[right - k];
            if((long long)sum / k >= (long long)threshold) 
                count++;
            
        }
        return count;
    }
};