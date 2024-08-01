//valid parenthesis

class Solution {
public:
    bool isValid(string s) {
        bool ans=false;
        stack<char> sta;
        for(int i=0;i<s.length();i++){
           if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            sta.push(s[i]);
           }else{
            if(sta.empty()){
                return false;
            }else if((s[i]==')' && sta.top()=='(') || (s[i]=='}' && sta.top()=='{') || (s[i]==']' && sta.top()=='[')){
                sta.pop();
            }else{
                return false;
            }
           }
        }
        if(sta.empty()){
            return true;
        }else{
            return false;
        }

    }
};