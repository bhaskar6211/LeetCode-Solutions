//Koko Eating Bananas

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        int ans = right;        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long hours = 0;
            
            for (int pile : piles) {
                hours += (pile + mid - 1) / mid;
            }          
            if (hours <= h) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};
int main() {
    Solution sol;
    
    vector<int> piles1 = {3,6,7,11};
    int h1 = 8;
    cout << sol.minEatingSpeed(piles1, h1) << endl;
    
    vector<int> piles2 = {30,11,23,4,20};
    int h2 = 6;
    cout << sol.minEatingSpeed(piles2, h2) << endl;
    
    return 0;
}
