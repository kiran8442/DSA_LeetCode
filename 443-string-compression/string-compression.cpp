class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> dest;
        int i = 1;
        int count = 1;
        if(chars.size() == 1)
            return 1;
        while(i < chars.size())
        {
            if(chars[i] == chars[i-1])
            {
                count++;
            }
            else{  
                //dest.push_back(std::to_string(count));
                // Convert count to string and push character by character
                dest.push_back(chars[i-1]);
                if(count > 1) {
                    std::string count_str = std::to_string(count);
                    for (char c : count_str) {
                        dest.push_back(c);
                    }
                }
                count = 1;
            }
            i++;
        }
        dest.push_back(chars[i-1]);
        if(count > 1)
        {
            std::string count_str = std::to_string(count);
            for (char c : count_str) {
                dest.push_back(c);
            }
            count = 1;
        }
        chars = dest;
        return dest.size();
    }
};