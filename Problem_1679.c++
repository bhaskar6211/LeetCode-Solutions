//Maximum Number of K-Sum Pairs

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int operations = 0;
        for (int num : nums) {
            int complement = k - num;
            if (freq[complement] > 0) {
                operations++;
                freq[complement]--;
            } else {
                freq[num]++;
            }
        }
        return operations;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1,2,3,4};
    int k1 = 5;
    cout << sol.maxOperations(nums1, k1) << endl;

    vector<int> nums2 = {3,1,3,4,3};
    int k2 = 6;
    cout << sol.maxOperations(nums2, k2) << endl;

    return 0;
}
