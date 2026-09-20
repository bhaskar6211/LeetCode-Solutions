//Maximum Number of Non-Overlapping Substrings

class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        int n = s.size();

        vector<int> left(26, n), right(26, -1);
        for (int i = 0; i < n; i++) {
            int c = s[i] - 'a';
            left[c] = min(left[c], i);
            right[c] = i;
        }
        vector<pair<int, int>> intervals;
        for (int c = 0; c < 26; c++) {
            if (left[c] == n) continue;
            int l = left[c];
            int r = right[c];
            bool valid = true;

            for (int i = l; i <= r; i++) {
                int ch = s[i] - 'a';
                if (left[ch] < l) {
                    valid = false;
                    break;
                }
                r = max(r, right[ch]);
            }
            if (valid)
                intervals.push_back({l, r});
        }
        sort(intervals.begin(), intervals.end(),[](auto &a, auto &b) {
                if (a.second == b.second)
                    return a.first > b.first;
                return a.second < b.second;
            });
        vector<string> ans;
        int lastEnd = -1;
        for (auto &[l, r] : intervals) {
            if (l > lastEnd) {
                ans.push_back(s.substr(l, r - l + 1));
                lastEnd = r;
            }
        }
        return ans;
    }
};