class Solution {
public:
    bool checkValidString(string s) {
        stack<int>st1; // for '('
        stack<int>st2; // for '*'
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(') st1.push(i);
            else if(s[i] == '*') st2.push(i);
            else{
                if(st1.empty()){
                    if(st2.empty()) return false;
                    else st2.pop();
                }
                else st1.pop();
            }
        }
        while(!st1.empty()){
            if(st2.empty()) break;
            if(st2.top() > st1.top()){
                st1.pop();
                st2.pop();
            }else st2.pop();
        }      
        if(st1.empty()) return true;
        else return false;
    }
};