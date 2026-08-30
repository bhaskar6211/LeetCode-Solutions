//Find mode in Binary Search Tree

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> modes;
        int maxCount = 0, currCount = 0;
        TreeNode* prev = nullptr;
        inorder(root, prev, currCount, maxCount, modes);
        return modes;
    }

private:
    void inorder(TreeNode* node, TreeNode*& prev, int& currCount, int& maxCount, vector<int>& modes) {
        if (!node) return;
        inorder(node->left, prev, currCount, maxCount, modes);
        if (prev && prev->val == node->val) currCount++;
        else currCount = 1;
        if (currCount > maxCount) {
            maxCount = currCount;
            modes.clear();
            modes.push_back(node->val);
        } else if (currCount == maxCount) {
            modes.push_back(node->val);
        }
        prev = node;
        inorder(node->right, prev, currCount, maxCount, modes);
    }
};

TreeNode* insert(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

int main() {
    Solution sol;
    TreeNode* root = nullptr;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 2);
    vector<int> modes = sol.findMode(root);
    for (int val : modes) cout << val << " ";
    cout << endl;
    return 0;
}
