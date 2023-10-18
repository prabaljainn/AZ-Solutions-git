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
       Prabal's Code Goes here
        if(a1 <= b2 and b1 <= a2) {
                double v1 = max(a1, b1);
                double v2 = min(a2, b2);
            if((m + n) % 2 == 0) {

                return (v1 + v2) / 2;
            } else {
                return max(a1, b1);
            }
        } else if(a1 > b2) {
            hi = parx - 1;
        } else {
            lo = parx + 1;
        }
    }
    return 1.0;
}

};