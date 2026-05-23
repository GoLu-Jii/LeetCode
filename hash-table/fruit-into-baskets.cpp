class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0;
        int max_fruit = 0;
        unordered_map<int, int> freq;
        for(int right = 0; right < fruits.size(); right++){
            
            freq[fruits[right]]++;
            

            while(freq.size() > 2){
                freq[fruits[left]]--;
                if(freq[fruits[left]] == 0){
                    freq.erase(fruits[left]);
                }
                left++;
            }
            int window_fruit = right - left + 1;
            max_fruit = max(max_fruit, window_fruit);
            
        }
        return max_fruit;
    }
};