/*************************************************************************
	> File Name: LeetCode257.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 01时07分01秒
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
    vector<vector<int> > ans;
    void in_order(TreeNode* root, vector<int> a) {
        if (root == NULL) return ;
        if (root->left == NULL && root->right == NULL) {
            a.push_back(root->val);         
            ans.push_back(a);
        }
        a.push_back(root->val);
        in_order(root->left, a);
        in_order(root->right, a);
        a.pop_back();
    }


public:
    vector<string> binaryTreePaths(TreeNode* root) {  /
        vector<int> a;
        in_order(root, a);
        vector<string> tt2;
        for (int i = 0; i < ans.size(); i++) {  //有点都比了， 这个可以在函数里面完成的
            string tt;
            for (int j = 0; j < ans[i].size(); j++) {  
                if (j != 0) tt += "->";
                tt += to_string(ans[i][j]);
                //cout << tt << endl;
            }
            tt2.push_back(tt);
        }

        return tt2;
    }
};
