//Convert Sorted Linked List to Binary Search Tree

#include <iostream>
#include <vector>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(nullptr){}
};

struct TreeNode{
    int val;
    TreeNode *left,*right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};

class Solution{
public:
    TreeNode* build(vector<int>& v,int l,int r){
        if(l>r) return nullptr;
        int m=(l+r)/2;
        TreeNode* root=new TreeNode(v[m]);
        root->left=build(v,l,m-1);
        root->right=build(v,m+1,r);
        return root;
    }

    TreeNode* sortedListToBST(ListNode* head){
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        return build(v,0,v.size()-1);
    }
};

void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main(){
    ListNode* head=new ListNode(-10);
    head->next=new ListNode(-3);
    head->next->next=new ListNode(0);
    head->next->next->next=new ListNode(5);
    head->next->next->next->next=new ListNode(9);

    Solution obj;
    TreeNode* root=obj.sortedListToBST(head);
    inorder(root);
    return 0;
}