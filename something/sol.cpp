class Solution {
public:

double findMedianSortedArrays(vector<int> &arr1, vector<int> &arr2) {
    int m  = arr1.size();
    int n = arr2.size();
    if(m > n)
        return findMedianSortedArrays(arr2, arr1);
    int halflen = (n + m + 1) / 2;
    int lo = 0;
    int hi = m;
    while(lo <= hi) {
        return 0.0;
        break;
    }
    return 1.0;
}

};