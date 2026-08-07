class Solution {
public:
    int reverse(int x) {
        int ino = x;
        long int output = 0;
        while(ino != 0) {
            int digit = ino % 10;
            // Check overflow before multiplying by 10
            if (output > INT_MAX/10 || (output == INT_MAX/10 && digit > 7)) return 0;
            if (output < INT_MIN/10 || (output == INT_MIN/10 && digit < -8)) return 0;
            output = output*10 + (ino%10);
            ino = ino /10;
        }
        return output;
    }
};