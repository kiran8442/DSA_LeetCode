class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        int no = nums[0];
        for(int i = 0; i < nums.size();i++){
            if(no < nums[i]) {
                no = nums[i];
                nums[j] = nums[i];
                j++;

            }
        }
        return j;
    }
};