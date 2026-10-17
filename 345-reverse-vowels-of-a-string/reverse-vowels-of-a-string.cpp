class Solution {
public:
    bool vowels(char ch)
    {
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
           ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int start = 0;
        int end = s.size() - 1;
        while(start < end)
        {
            if(vowels(s[start]) && vowels(s[end]))
            {
                std::swap(s[start], s[end]);
                start++;
                end--;
            }
            else if(vowels(s[start]))
                end--;
            else if(vowels(s[end]))
                start++;
            else{
                start++;
                end--;
            }
        }  
        return s; 
    }
};