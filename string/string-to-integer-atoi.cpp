class Solution {
public:
    int atoi(const string &s, int i, long long ans, int sign){
        if(i >= s.length() || !isdigit(s[i])){
            return int(sign * ans);
        }

        ans = ans * 10 + (s[i] - '0');

        if(sign*ans > 2147483647) return 2147483647;
        if(sign*ans < -2147483648) return -2147483648;

        return atoi(s, i+1, ans, sign);
    }

    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        while(i < s.length()){
            if(s[i] == ' '){
                i++;
            }
            else{
                break;
            }
        }
        // if (i < s.size() && (s[i] == '+' || s[i] == '-')){
        //     if(s[i] == '+')
        //         sign = 1;
        //     if(s[i] == '-')
        //         sign = -1;
        // }
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        

        return atoi(s, i, 0, sign);
    }
};