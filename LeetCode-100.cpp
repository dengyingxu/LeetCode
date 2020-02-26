/*************************************************************************
	> File Name: LeetCode-100.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 14时56分25秒
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
class Solution { //
    bool in_orderNode(TreeNode *p, TreeNode *q) {
        if (p == NULL && q == NULL) return true;
        if (p == NULL || q == NULL) return false;
        if (p->val != q->val) return false;
        return in_orderNode(p->left, q->left) && in_orderNode(p->right, q->right);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return in_orderNode(p, q);
    }
};
