class Solution {
public:
    string convert(string s, int numRows) {
        int n = 0;
        int i = 0;
        int j = 0;
        std::string Output_string = "";
        std::vector<std::vector<char>> array(numRows, std::vector<char>(s.length()));
        if(numRows == 1){
            return s;
        }
        while(n < s.length()){
            for(; j< numRows && n < s.length(); j++){
                array[j][i] = s[n++];
            }
            j=j-2;
            i++;
            for( ;j > 0 && n < s.length() ;i++,j--){
               array[j][i] = s[n++]; 
            }
        }  
        for(int i = 0;i < numRows;i++){
            for(int j = 0; j < s.length();j++){
                if(array[i][j] != '\0')
                    Output_string.push_back(array[i][j]);
            }
        } 
        return Output_string;
    }
};