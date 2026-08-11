class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int run = 0;
        int temp;
        while(run <= high)
        {
            //found 0
            if(nums[run] == 0 )
            {
                temp = nums[run];
                nums[run] = nums[low];
                nums[low] = temp;
                low++;
                run++;
            }// found 1 
            else if(nums[run] == 1)
            {
                run++;
            }// found 2
            else
            {
                temp = nums[run];
                nums[run] = nums[high];
                nums[high] = temp;
                high--;
            }
        }
    }
};