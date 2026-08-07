class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int pivot = 0;
        for(int i = digits.size()-1; i >= 0;i--) {
            if(digits[i] != 9) {
                if(pivot == 1)
                    digits[i] = digits[i] + pivot;
                else
                    digits[i] = digits[i] + pivot +1;
                pivot = 0;
                break;
            }

            pivot = 1;
            digits[i] = 0 ;
        }
        if(pivot == 1) {
            int temp1 = 1, temp2;
            digits.resize(digits.size() + 1);
            for(int i = 0; i < digits.size();i++) {
                temp2 = digits[i];
                digits[i] = temp1;
                temp1 = temp2;
            }
        }
        
        /*long long int Number = 0;
        long long int FinalNumber = 0;
        int size = 0;
        for(int i = 0 ; i < digits.size() ; i++) {
            Number = (Number*10) + digits[i];
        }
        //vector<int> output;
        Number++;
        FinalNumber = Number;
        
        while(Number != 0) {
            Number = Number/10;
            size++;
        }
        if(size != digits.size())
            digits.resize(digits.size() + 1);
        
        for(int i = 0 ;FinalNumber != 0 ;i++) {
            digits[i] = FinalNumber % 10;
            FinalNumber = FinalNumber / 10;
        }
        reverse(digits.begin(), digits.end());*/
        return digits;
    }
};