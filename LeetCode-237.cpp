/*************************************************************************
	> File Name: LeetCode-237.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 12时40分57秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* del=node->next;
        node->val=node->next->val;      //使当前节点的val值为下一个节点的val值
        node->next=node->next->next;    //使当前节点指向下下个节点
        delete del;
    }
};

