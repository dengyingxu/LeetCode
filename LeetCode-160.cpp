/*************************************************************************
	> File Name: LeetCode-160.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 12时58分59秒
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pa=headA,*pb=headB;
        while(pa!=pb){
            pa=(pa!=nullptr)?pa->next:headB;
            pb=(pb!=nullptr)?pb->next:headA;
        }
        return pa;
    }
};

