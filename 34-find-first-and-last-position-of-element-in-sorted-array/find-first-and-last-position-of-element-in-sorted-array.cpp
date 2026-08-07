class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> Array = {-1,-1};
        Array[0] = firstOccurances(nums, target);
        Array[1] = lastOccurances(nums, target);
        return Array; 
    }
    int firstOccurances(vector<int>& nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int index = -1;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(nums[mid] == target)
            {
                index = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return index;
    }
    int lastOccurances(vector<int>& nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int index = -1;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(nums[mid] == target)
            {
                index = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return index;
    }
};