//Spiral Matrix II

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n));
        int left = 0, right = n - 1, top = 0, bottom = n - 1;
        int num = 1;
        while (left <= right && top <= bottom) {
            for (int j = left; j <= right; j++) res[top][j] = num++;
            top++;
            for (int i = top; i <= bottom; i++) res[i][right] = num++;
            right--;
            if (top <= bottom) {
                for (int j = right; j >= left; j--) res[bottom][j] = num++;
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) res[i][left] = num++;
                left++;
            }
        }
        return res;
    }
};
int main() {
    Solution sol;
    int n = 3;
    vector<vector<int>> matrix = sol.generateMatrix(n);
    for (auto &row : matrix) {
        for (auto &val : row) cout << val << " ";
        cout << endl;
    }
    return 0;
}
