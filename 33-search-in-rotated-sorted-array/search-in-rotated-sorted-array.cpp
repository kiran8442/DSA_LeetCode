class Solution {
public:
    int search(vector<int>& nums, int target) {
        //binary search
        int st = 0;
        int end = nums.size() - 1;
        int mid = 0;
        while(st <= end)
        {
            mid = st + (end - st) / 2;
            if(nums[mid] == target)
                return mid;
            if(nums[st] <= nums[mid]) // left sorted
            {
                if(nums[st] <= target && nums[mid] >= target)
                    end = mid - 1;
                else
                    st = mid + 1;
            }
            else{ // right sorted
                if(nums[mid] <= target && nums[end] >= target)
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }
};