/*************************************************************************
	> File Name: LeetCode235.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 23时13分30秒
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

public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return NULL;
        if (root->val > p->val && root->val > q->val) {
            //cout << root->val << " " << p->val << " " << q->val << endl; 
            return lowestCommonAncestor(root->left, p, q);
        } else if (root->val < p->val && root->val < q->val) {
            //cout << root->val << " " << p->val << " " << q->val << endl; 
            return lowestCommonAncestor(root->right, p, q);
        } else {
            return root;
        }
    }
};