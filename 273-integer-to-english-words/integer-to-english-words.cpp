class Solution {
public:
    vector<string> ones = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<string> teens = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    vector<string> tens ={"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    void convertThreeDigitNumbers(int num, string &Output) 
    {
        if(num > 99)
        {
            Output += " ";
            Output += ones[num / 100];
            num = num % 100;
            Output += " Hundred";
        }
        if(num >= 20 && num < 100)
        {
            Output += " ";
            Output += tens[num / 10];
            num = num % 10;
        }
        if(num >= 10 && num < 20)
        {
            Output += " ";
            Output += teens[num % 10];
            num = num % 10;
            return;
        }
        if (num < 10 && num > 0) 
        {
            Output += " ";
            Output += ones[num];
        }
    }
    string numberToWords(int num) {
        string Output;
        if(num == 0){
            Output = "Zero";
            return Output;
        }
        if(num >= 1000000000000L)
        {
            convertThreeDigitNumbers(num / 1000000000000, Output);
            Output += " Trillion";
            num = num % 1000000000000;
        }
        if(num >= 1000000000L)
        {
            convertThreeDigitNumbers(num / 1000000000, Output);
            Output += " Billion";
            num = num % 1000000000;
        }
        if(num >= 1000000)
        {
            convertThreeDigitNumbers(num / 1000000, Output);
            Output += " Million";
            num = num % 1000000;
        }
        if(num >= 1000)
        {
            convertThreeDigitNumbers(num / 1000, Output);
            Output += " Thousand";
            num = num % 1000;
        }
        convertThreeDigitNumbers(num, Output);
        Output.erase(0, 1);
        return Output;
    }
};