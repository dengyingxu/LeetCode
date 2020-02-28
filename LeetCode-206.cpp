/*************************************************************************
	> File Name: LeetCode-206.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 13时08分55秒
 ************************************************************************/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = NULL, *pre = head;
        while (pre != NULL) {
            ListNode* t = pre->next;
            pre->next = cur;
            cur = pre;
            pre = t;
        }
        return cur;
    }
};

