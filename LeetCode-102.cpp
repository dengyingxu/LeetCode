/*************************************************************************
	> File Name: LeetCode-102.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 17时29分46秒
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
    vector<vector<int>> levelOrder(TreeNode* root) {
       
        vector<vector<int>> ans;
        vector<int> tt;
        TreeNode* front;
        queue<TreeNode *> q;
        queue<TreeNode *> p;
        if (root == NULL) return ans;
        q.push(root);
        int num = 0, pos = 0;
        while (!q.empty()) {
            front = q.front();
            while(!q.empty()){
                p.push(q.front());
                q.pop();
            }
            while(!p.empty()){
                front = p.front();
                tt.push_back(front->val);
                p.pop();
                if (front->left != NULL) {
                    q.push(front->left);
                }
                if (front->right != NULL) {
                    q.push(front->right);
                }
            }
            ans.push_back(tt);
            tt.clear();
        }
        return ans;
    }
};
