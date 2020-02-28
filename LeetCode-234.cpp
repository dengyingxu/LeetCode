/*************************************************************************
	> File Name: LeetCode-234.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 13时08分06秒
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
//pivate:
    ListNode* rev(ListNode* head) {
        ListNode *p = head, *q;
        ListNode *dummyNode = new ListNode(0);
        dummyNode->next = NULL;
        while (p) {
            q = p->next;
            p->next = dummyNode->next;
            dummyNode->next = p;
            p = q;
        }
        return dummyNode->next;
    }
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true; 
        int cnt = 0;
        ListNode *p = head, *t1 = head, *t2;
        while(p) {
            cnt++;
            p = p->next;
        }
        p = head;
        int temp = cnt / 2;
        cnt = cnt / 2 - 1;
        while(cnt--) {
            p = p->next;
        }
        p->next = rev(p->next);
        t2 = p->next;
        while(temp--) {
            if (t1->val != t2->val) return false;
            t1 = t1->next;
            t2 = t2->next;
        }
        return true;
    }
};//用完链表还需要恢复，懒得写了
