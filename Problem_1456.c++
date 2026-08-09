//Max Number of Vowels in a Substring of Given Length

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        auto isVowel = [](char c) {
            return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
        };

        int count = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) count++;
        }
        int maxCount = count;

        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i])) count++;
            if (isVowel(s[i-k])) count--;
            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};
int main() {
    Solution sol;

    string s1 = "abciiidef";
    int k1 = 3;
    cout << "Max vowels (Example 1): " 
         << sol.maxVowels(s1, k1) << endl;

    string s2 = "aeiou";
    int k2 = 2;
    cout << "Max vowels (Example 2): " 
         << sol.maxVowels(s2, k2) << endl;

    string s3 = "leetcode";
    int k3 = 3;
    cout << "Max vowels (Example 3): " 
         << sol.maxVowels(s3, k3) << endl;

    return 0;
}
