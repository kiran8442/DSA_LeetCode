class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0,j = 0; i < nums1.size() && j < nums2.size();i++){
            if(nums1[i] == 0){
                nums1[i] = nums2[j++];
            }
        }
        int Temp = 0;
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums1.size(); j++) {
                if(nums1[i] < nums1[j]){
                    Temp = nums1[i];
                    nums1[i] = nums1[j];
                    nums1[j] = Temp;
                }
            }
        }
    }
};