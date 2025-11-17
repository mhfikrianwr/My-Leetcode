class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(); int m = nums2.size();
        int size = n + m;
        int mid = (size) / 2;
        double s = 0;
        int indx = 0;
        int l1 = 0, l2 = 0;
        int prev = 0;
        while(indx <= mid && l1 < n  && l2 < m){
            if(nums1[l1] >= nums2[l2]){
                if(indx == mid && !(size & 1)) s += nums2[l2] + prev;
                else if(indx == mid) s += nums2[l2];
                prev = nums2[l2];
                l2++;
            }else if(nums1[l1] < nums2[l2]){
                if(indx == mid && !(size & 1)) s += nums1[l1] + prev;
                else if(indx == mid) s += nums1[l1];
                prev = nums1[l1];
                l1++;
            }
            indx++;
        }
        while(indx <= mid && l1 < n){
            if(indx == mid && !(size & 1)) s += nums1[l1] + prev;
            else if(indx == mid) s += nums1[l1];
            prev = nums1[l1];
            indx++;
            l1++; 
        }
        while(indx <= mid && l2 < m){
            if(indx == mid && !(size & 1)) s += nums2[l2] + prev;
            else if(indx == mid) s += nums2[l2];
            prev = nums2[l2];
            indx++;
            l2++; 
        }

        if(size & 1) return s;
        else return s / 2.0;
    }
};