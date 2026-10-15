class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int start = 0, end = 0;
        int zeroflipped = 0;
        int max_so_far = 0;
        while(end < nums.size())
        {
            if(nums[end] == 0)
                zeroflipped++;

            while(zeroflipped > k)
            {
                if(nums[start] == 0)
                    zeroflipped--;
                start++;
            }
            end++;
            max_so_far = max(end - start, max_so_far);
        }
        return   max_so_far;    
    }
};