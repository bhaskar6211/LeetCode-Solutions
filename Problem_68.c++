//Text Justification

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res;
        int i = 0, n = words.size();
        while (i < n) {
            int j = i, len = 0;
            while (j < n && len + words[j].size() + (j - i) <= maxWidth) {
                len += words[j].size();
                j++;
            }
            int spaces = maxWidth - len;
            int gaps = j - i - 1;
            string line;
            if (j == n || gaps == 0) {
                for (int k = i; k < j; k++) {
                    line += words[k];
                    if (k < j - 1) line += " ";
                }
                line += string(maxWidth - line.size(), ' ');
            } else {
                int spaceEach = spaces / gaps;
                int extra = spaces % gaps;
                for (int k = i; k < j; k++) {
                    line += words[k];
                    if (k < j - 1) line += string(spaceEach + (extra-- > 0), ' ');
                }
            }
            res.push_back(line);
            i = j;
        }
        return res;
    }
};
int main() {
    Solution sol;
    vector<string> words = {"This","is","an","example","of","text","justification."};
    int maxWidth = 16;
    vector<string> result = sol.fullJustify(words, maxWidth);
    for (auto &line : result) cout << "\"" << line << "\"" << endl;
    return 0;
}
