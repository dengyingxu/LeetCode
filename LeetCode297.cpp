/*************************************************************************
	> File Name: LeetCode297.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月03日 星期二 16时10分03秒
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
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root == NULL) return "";
        stringstream ss;
        queue<TreeNode* > Q;
        Q.push(root);
        while (Q.size()) {
            TreeNode* p = Q.front();
            Q.pop();
            if (p == NULL) {
                ss << "# ";
            }
            else {
                ss << p->val << " ";
                Q.push(p->left);
                Q.push(p->right);
            }
        }
        cout << ss.str() << endl;
        return ss.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.empty()) {
            return NULL;
        }
        stringstream ss(data);
        string t;
        ss >> t;
        TreeNode* rt = new TreeNode(stoi(t));
        queue<TreeNode* > Q;
        Q.push(rt);
        while(Q.size()) {
            TreeNode* p = Q.front(); Q.pop();
            ss >> t;
            if (t[0] == '#') {
                p->left = NULL;
            } else {
                p->left = new TreeNode(stoi(t));
                Q.push(p->left);
            }
            ss >> t;
            if (t[0] == '#') {
                p->right = NULL;
            } else {
                p->right = new TreeNode(stoi(t));
                Q.push(p->right);
            }
        }
        return rt;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));
