//Can Place Flowers

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        for (int i = 0; i < size && n > 0; i++) {
            if (flowerbed[i] == 0) {
                int left = (i == 0) ? 0 : flowerbed[i - 1];
                int right = (i == size - 1) ? 0 : flowerbed[i + 1];
                if (left == 0 && right == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }
        return n == 0;
    }
};
int main() {
    Solution sol;
    vector<int> flowerbed = {1,0,0,0,1};
    int n = 1;
    cout << (sol.canPlaceFlowers(flowerbed, n) ? "true" : "false") << endl;
    return 0;
}
