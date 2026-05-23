class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s == t){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        if (s.size() != t.size()) return false;

        int count[26] = {0};

        for (char c : s) {
            count[c - 'a']++;   
        }
        for (char c : t) {
            count[c - 'a']--;   
            if (count[c - 'a'] < 0) return false;
        }
        return true;
    }
};