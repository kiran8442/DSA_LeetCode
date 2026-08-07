class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        int j =0;
        char ch;
        bool valid = true;
        int i = 0;
        for(i = 0; i < s.length();i++) {
            switch(s[i]) {
                case '(':
                case '[':
                case '{':
                    S.push(s[i]);
                break;
                case ')':
                    if(S.empty())
                        return false;
                    ch = S.top();
                    S.pop();
                    if(ch != '('){
                        return false;
                    }
                break;
                case ']':
                    if(S.empty())
                        return false;
                    ch = S.top();
                    S.pop();
                    if(ch != '['){
                        return false;
                    }
                break;
                case '}':
                    if(S.empty())
                        return false;
                    ch = S.top();
                    S.pop();
                    if(ch != '{'){
                        return false;
                    }
                break;
            }
        }
        if(s.length() == i && valid == true && S.empty())
            return true;
        return false;
    }
};