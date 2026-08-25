//Majority Element II

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for (int x : nums) freq[x]++;
        vector<int> res;
        for (auto &p : freq) {
            if (p.second > nums.size()/3) res.push_back(p.first);
        }
        return res;
    }
};
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    Solution s;
    vector<int> ans = s.majorityElement(nums);
    for (int x : ans) cout << x << " ";
    cout << "\n";
    return 0;
}
