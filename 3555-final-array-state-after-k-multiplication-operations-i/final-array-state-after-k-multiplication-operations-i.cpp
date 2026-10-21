class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        int min_index = -1;
        int size = nums.size();
        for(int i = 0; i < k; i++)
        {
            //find minimum
            int j = 0;
            int min_value = nums[0];
            int min_index = 0;
            for(;j < size; j++)
            {
                if(min_value > nums[j])
                {
                    min_value = nums[j];
                    min_index = j;
                }
            }
            nums[min_index] = nums[min_index] * multiplier;
        }
        return nums;
    }
};