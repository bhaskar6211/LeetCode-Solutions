//Rearrange Array Elements by Sign

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        for(int x : nums) {
            if(x >= 0) pos.push_back(x);
            else neg.push_back(x);
        }
        vector<int> ans;
        int i = 0, j = 0;
        while(i < pos.size() && j < neg.size()) {
            ans.push_back(pos[i++]);
            ans.push_back(neg[j++]);
        }
        return ans;
    }
};
int main() {
    vector<int> nums = {3,1,-2,-5,2,-4};
    Solution sol;
    vector<int> ans = sol.rearrangeArray(nums);
    for(int x : ans) cout << x << " ";
    return 0;
}
