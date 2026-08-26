//Sum of All Subset XOR Totals

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return dfs(nums, 0, 0);
    }
private:
    int dfs(vector<int>& nums, int index, int currentXor) {
        if (index == nums.size()) return currentXor;
        return dfs(nums, index + 1, currentXor ^ nums[index]) 
             + dfs(nums, index + 1, currentXor);
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    Solution sol;
    cout << sol.subsetXORSum(nums) << endl;
    return 0;
}

