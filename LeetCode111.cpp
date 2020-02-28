/*************************************************************************
	> File Name: LeetCode111.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 16时58分04秒
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
    int minPath(TreeNode *root) {
        if (root == NULL) return 0;
        if ((root->right == NULL) && (root->left == NULL)) return 1;
        int min_num = 0x7fffffff;
        if (root->left != NULL) {
            min_num = min(minPath(root->left), min_num);
        }
        if (root->right != NULL) {
            min_num = min(minPath(root->right), min_num);
        }
        return min_num + 1;
    }
public:
    int minDepth(TreeNode* root) {
        return minPath(root);
    }
};
