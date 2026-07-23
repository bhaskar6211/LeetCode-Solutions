//Kids With the Greatest Number of Candies
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *max_element(candies.begin(), candies.end());
        vector<bool> result;

        for (int c : candies) {
            result.push_back(c + extraCandies >= maxCandies);
        }
        return result;
    }
};
int main() {
    Solution sol;
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    vector<bool> ans = sol.kidsWithCandies(candies, extraCandies);
    cout << "Result: ";
    for (bool b : ans) cout << (b ? "true " : "false ");
    cout << endl;

    return 0;
}
