//Pascal's Triangle

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle(numRows);
        for (int i = 0; i < numRows; i++) {
            triangle[i].resize(i + 1);
            triangle[i][0] = triangle[i][i] = 1;
            for (int j = 1; j < i; j++) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
        return triangle;
    }
};
int main() {
    Solution s;
    int numRows;
    cin >> numRows;
    vector<vector<int>> result = s.generate(numRows);
    for (auto &row : result) {
        for (auto &val : row) cout << val << " ";
        cout << "\n";
    }
    return 0;
}
