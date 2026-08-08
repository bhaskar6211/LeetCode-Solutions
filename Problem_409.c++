//Palindrome Permutation

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;
        
        int length = 0;
        bool oddFound = false;
        
        for (auto &p : freq) {
            if (p.second % 2 == 0) {
                length += p.second;
            } else {
                length += p.second - 1;
                oddFound = true;
            }
        }
        
        return oddFound ? length + 1 : length;
    }
};

int main() {
    Solution sol;
    string s = "abccccdd";
    cout << sol.longestPalindrome(s) << endl;
    return 0;
}
