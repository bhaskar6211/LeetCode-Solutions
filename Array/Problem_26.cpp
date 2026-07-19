//Remove Duplicates from Sorted Array
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0; // slow pointer
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;              // move slow pointer
                nums[i] = nums[j]; // overwrite duplicate
            }
        }
        return i + 1; // length of unique elements
    }
};
int main() {
    Solution sol;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    int k = sol.removeDuplicates(nums);

    cout << "Unique length: " << k << endl;
    cout << "Array after removal: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}