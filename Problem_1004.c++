//Max Consecutive Ones III

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0;
        int zeros = 0, maxLen = 0;
        while (right < nums.size()) {
            if (nums[right] == 0) zeros++;

            while (zeros > k) {
                if (nums[left] == 0) zeros--;
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen;
    }
};
int main() {
    Solution sol;

    vector<int> nums1 = {1,1,1,0,0,0,1,1,1,1,0};
    int k1 = 2;
    cout << "Max consecutive ones (Example 1): "
         << sol.longestOnes(nums1, k1) << endl;

    vector<int> nums2 = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k2 = 3;
    cout << "Max consecutive ones (Example 2): "
         << sol.longestOnes(nums2, k2) << endl;

    return 0;
}
