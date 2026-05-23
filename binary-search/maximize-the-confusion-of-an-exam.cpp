class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int t = 0;
        int f = 0;
        int left = 0;
        int size = 0;
        for(int right = 0; right < answerKey.size(); right++){
            if(answerKey[right] == 'T') t++;
            else f++;
            int mini = min(t,f);
            while(mini > k){
                if(answerKey[left] == 'T') t--;
                else f--;
                mini = min(t,f);
                left++;
            }
            int window_size = right - left + 1;
            size = max(size, window_size);
        }
        return size;
    }
};