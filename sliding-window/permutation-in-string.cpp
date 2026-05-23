class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>fs1(26, 0);
        vector<int>fs2(26, 0);
        int left = 0;

        if(s1.size() > s2.size()) return false;

        for(int i = 0; i < s1.size(); i++){
            fs1[s1[i] - 'a']++;
        }

        for(int i = 0; i < s1.size(); i++){
            fs2[s2[i] - 'a']++;
        }
        if(fs1 == fs2) return true;

        for(int right = s1.size(); right < s2.size(); right++){
            fs2[s2[right] - 'a']++;
            fs2[s2[left] - 'a']--;
            left++;
            if(fs1 == fs2) return true;
        }
        return false;
    }
};