class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k < 0)
            return;
        int size = nums.size();
        k = k % size;
        int start = size - k;
        vector<int> nums2;
        int index = 0;
        index = start;
        while(index < size)
        {
            nums2.push_back(nums[index]);
            index++;
        }
        index = 0;
        while(index < start)
        {
            nums[size - index - 1] = nums[start - index - 1];
            index++;
        }
        index = 0;
        while(index < nums2.size())
        {
            nums[index] = nums2[index];
            index++;
        }
    }
};