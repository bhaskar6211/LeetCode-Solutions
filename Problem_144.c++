#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    if (root == nullptr) return ans;

    stack<TreeNode*> st;
    st.push(root);
    while (!st.empty()) {
        TreeNode* node = st.top();
        st.pop();

        ans.push_back(node->val);

        if (node->right) st.push(node->right);
        if (node->left) st.push(node->left);
    }
    return ans;
}
int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> result = preorderTraversal(root);
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}