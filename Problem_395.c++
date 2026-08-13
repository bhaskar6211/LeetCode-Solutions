//Longest Substring with At Least K Repeating Characters

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubstring(string s, int k) {
        return helper(s, k);
    }
private:
    int helper(string s, int k) {
        if (s.empty()) 
            return 0;
        vector<int> freq(26,0);
        for (char c : s) freq[c-'a']++;
        for (int i=0;i<s.size();i++) {
            if (freq[s[i]-'a'] < k) {
                int left = helper(s.substr(0,i),k);
                int right = helper(s.substr(i+1),k);
                return max(left,right);
            }
        }
        return s.size();
    }
};

int main() {
    Solution sol;
    cout << sol.longestSubstring("aaabb",3) << endl;
    cout << sol.longestSubstring("ababbc",2) << endl;
}
