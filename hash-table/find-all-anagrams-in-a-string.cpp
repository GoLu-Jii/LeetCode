class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // unordered_map<char, int> freq;

        // for(int i = 0; i < p.length(); i++){
        //     freq[p[i]]++;
        // }

        // int freq_sum = 0;

        // for(auto &item : freq){
        //     freq_sum += item.second;
        // }

        // int left = 0;
        // vector<int> ans;

        // for(int i = 0; i < p.size(); i++){
        //     if(freq.count(s[i])){
        //         freq[s[i]]--;
        //         freq_sum--;
        //     }
        //     if(freq_sum == 0)
        //         ans.push_back(left);
        // }

        // for(int right = p.size(); right < s.size(); right++){
        //     if(freq.count(s[right])){
        //         freq_sum--;
        //         freq[s[right]]--;
        //     }

        //     if(freq.count(s[left])){
        //         freq_sum++;
        //         freq[s[left]]++;
        //     }
        //     left++;

        //     if(freq_sum == 0){
        //         ans.push_back(left);
        //     }
        // }

        // return ans;

        // =========================47/64========================


        vector<int> freq_s(26, 0);  
        vector<int> freq_p(26, 0); 

        if(s.size() < p.size()) return {};

        for (char c : p) {
            freq_p[c - 'a']++;
        }

        vector<int>ans;
        int left = 0;
        for(int i = 0; i < p.size(); i++){
            freq_s[s[i] - 'a']++;
        }
        if(freq_p == freq_s) ans.push_back(left);

        for(int right = p.size(); right < s.size(); right++){
            freq_s[s[right] - 'a']++;
            freq_s[s[right - p.size()] - 'a']--;
            if(freq_s == freq_p) ans.push_back(right - p.size() + 1);

        }
        return ans;
    }
};