/*************************************************************************
	> File Name: LeetCode-101.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 16时45分17秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    /*void in_order(TreeNode *root, char *a, int *pos) {
        if (root == NULL) return ;
        in_order(root->left, a, pos++);
        a[pos] = root->val;
        in_order(root->right, a, pos++);
    }*/
    bool ismirror(TreeNode *root1, TreeNode* root2) {
        if (root1 == NULL && root2 == NULL) return true;
        if (root1 == NULL || root2 == NULL) return false;
        if (root1->val != root2->val) return false;
        return (root1->val == root2->val) && ismirror(root1->left, root2->right) && ismirror(root1->right, root2->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return ismirror(root, root);
    }
};
