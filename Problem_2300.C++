//Successful Pairs of Spells and Potions

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> result;      
        for (int spell : spells) {
            long long required = (success + spell - 1) / spell; 
            auto it = lower_bound(potions.begin(), potions.end(), required);
            result.push_back(potions.end() - it);
        } 
        return result;
    }
};
int main() {
    Solution sol;
    
    vector<int> spells = {5, 1, 3};
    vector<int> potions = {1, 2, 3, 4, 5};
    long long success = 7;
    
    vector<int> ans = sol.successfulPairs(spells, potions, success);
    
    cout << "Successful pairs count: ";
    for (int x : ans) cout << x << " ";
    cout << endl;
    
    return 0;
}
