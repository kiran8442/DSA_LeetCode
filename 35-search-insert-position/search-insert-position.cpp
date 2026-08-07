class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos = 0;
        for(int i = 0; i< nums.size();i++) {
            if(nums[i] == target)
                return i;
            else if(nums[i] > target && i == 0)
                return 0;
            else if(nums[i] > target){
                if(nums[i-1] < target && nums[i] > target)
                    return i;
                return i-1;
            }
        }
        return nums.size();
    }
};