//Maximum Average Subarray I

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long sum = 0;
        for (int i = 0; i < k; i++) sum += nums[i];
        long maxSum = sum;

        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];
            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 12, -5, -6, 50, 3};
    int k1 = 4;
    cout << fixed << setprecision(5);
    cout << "Max average (Example 1): " << sol.findMaxAverage(nums1, k1) << endl;

    vector<int> nums2 = {5};
    int k2 = 1;
    cout << "Max average (Example 2): " << sol.findMaxAverage(nums2, k2) << endl;

    return 0;
}
