class Solution {
public:
    bool isPalindrome(int x) {
        long signed int rev_num = 0;
        int num = x;
        while(num > 0)
        {
            rev_num = (rev_num * 10) + (num % 10);
            num = num / 10;
        }
        if(x == rev_num)
            return true;
        return false;
    }
};