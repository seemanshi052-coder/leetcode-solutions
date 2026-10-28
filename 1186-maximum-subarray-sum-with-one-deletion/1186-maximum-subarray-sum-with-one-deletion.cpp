class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int keep = arr[0], drop = 0, maxi = arr[0];
        for (int i = 1; i < n; i++) {
            int x = arr[i];
            drop = max(drop + x, keep);
            keep = max(x, keep + x);
            maxi = max(maxi, max(keep, drop));
        }
        return maxi;
    }
};