//Merge Strings Alternately
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i = 0, j = 0;
        int n1 = word1.size(), n2 = word2.size();
        while (i < n1 && j < n2) {
            result.push_back(word1[i++]);
            result.push_back(word2[j++]);
        }
        while (i < n1) result.push_back(word1[i++]);
        while (j < n2) result.push_back(word2[j++]);

        return result;
    }
};

int main() {
    Solution sol;
    string word1, word2;

    cout << "Enter first string: ";
    cin >> word1;
    cout << "Enter second string: ";
    cin >> word2;

    string merged = sol.mergeAlternately(word1, word2);
    cout << "Merged string: " << merged << endl;

    return 0;
}
