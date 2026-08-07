class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int len = 0;
        bool space = false;
        for(int i = 0; i < s.length(); i++) {
            if(space == true && s[i] != ' ')
            {
                length = 0;
                space = false;
            }
            if(s[i] == ' ') {
                space  = true;
            }
            else length++;
        }
        return length;
    }
};