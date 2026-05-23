class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int ed = s.size();
        ed-=1;
        while(st < ed){
            swap(s[st++], s[ed--]);
        }
    }
};