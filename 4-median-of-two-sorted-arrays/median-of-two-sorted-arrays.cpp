class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        int m = 0;
        size_t size = nums1.size() + nums2.size();
        output.resize(size);
        for(int i = 0,j = 0; i < nums1.size() || j < nums2.size();){
            if(i >= nums1.size()) {
                for(int k = j; j < nums2.size(); k++){
                    output[m++] = nums2[j++];
                }
                break;
            }
            else if(j >= nums2.size()) {
                for(int k = i; i < nums1.size(); k++){
                    output[m++] = nums1[i++];
                }
                break;
            }
            if(nums1[i] < nums2[j]) {
                output[m++] = nums1[i++];
            }
            else {
                output[m++] = nums2[j++];
            }
        }
        if(size % 2 == 0){
            return (double)(output[size/2] + output[(size/2) - 1])/2;
        }
        else {
            return (double)output[(size)/2];
        }
    }
};