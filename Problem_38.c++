//Count and Say

class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for (int i = 2; i <= n; i++) {
            string temp = "";
            for (int j = 0; j < ans.size(); ) {
                char ch = ans[j];
                int cnt = 0;
                while (j < ans.size() && ans[j] == ch) {
                    cnt++;
                    j++;
                }
                temp += to_string(cnt);
                temp += ch;
            }
            ans = temp;
        }
        return ans;
    }
};