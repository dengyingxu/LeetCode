/*************************************************************************
	> File Name: LeetCode-104.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 21时27分46秒
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
    void in_order(TreeNode *root, int level, int *ans) {
        if (root == NULL) return ;
        in_order(root->left, level + 1,ans);
        *ans = max(*ans, level);
       // printf("%d level = %d  ans = %d\n", root->val, level, *ans);
        in_order(root->right, level + 1, ans);
    }
public:
    int maxDepth(TreeNode* root) {
        //if (root == NULL) return 0;
        int ans = 0;
        in_order(root, 1, &ans);
        return ans;
    }
};
