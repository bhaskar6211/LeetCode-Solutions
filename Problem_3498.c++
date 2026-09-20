//Reverse Degree of a String

class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            int revValue = 'z' - s[i] + 1;
            ans += revValue * (i + 1);
        }
        return ans;
    }
};