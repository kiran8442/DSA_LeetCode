class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        int left = 0;
        int right = 0 ;
        while(right < nums.size())
        {
            if(nums[right] != val){
                nums[left] = nums[right];
                left++;
            }
            right++;
            /*
            if(nums[start] == val && nums[end] != val)
            {
                swap(nums[start], nums[end]);
                start++;
                end--;
            }
            if(nums[end] == val)
                end--;
            if(nums[start] != val)
                start++;*/
        }
        return left;
    }
};