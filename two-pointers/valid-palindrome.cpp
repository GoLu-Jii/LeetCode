class Solution {
public:
    string cleanString(const string& s) {
        string result;
        for (char ch : s) {
            if (isalnum(ch)) {
                result += tolower(ch); // Optional: convert to lowercase
          }
       }
      return result;
    }

    bool isPalindrome(string s) {
        string str = cleanString(s);
        string check = str;
        int st = 0;
        int ed = str.size();
        ed-=1;
        while(st < ed){
            swap(str[st++], str[ed--]);
        }

        return str == check;

    }
};