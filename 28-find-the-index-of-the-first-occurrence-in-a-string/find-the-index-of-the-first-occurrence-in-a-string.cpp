class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.length(); i++) {
            if(haystack[i] == needle[0]) {
                int j = 0;
                for(int k = i; j < needle.length();k++,j++){
                    if(haystack[k] != needle[j])
                        break;
                }
                if(j>= needle.length())
                    return i;
                else -1;
            }
        }
        return -1;
    }
};