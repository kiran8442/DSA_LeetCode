class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int Max = 0;

        while (left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;
            Max = max(Max, h * w);

            // Move the smaller height pointer
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return Max;
    }
};