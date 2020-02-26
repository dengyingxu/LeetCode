/*************************************************************************
	> File Name: LeetCode-142.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 13时01分50秒
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
    ListNode* detectCycle(ListNode* head) {
	ListNode* fastPtr=head, *slowPtr=head;
	// 让fast与slow指针第一次相遇
	while (fastPtr!=NULL && fastPtr->next!=NULL)
	{
		fastPtr = fastPtr->next->next;
		slowPtr = slowPtr->next;
		if (fastPtr==slowPtr)
		{
			// 从相遇点再走“非环部分长度”一定可以再次走到环起点
			fastPtr = head;
			while (fastPtr != slowPtr)
			{
				fastPtr = fastPtr->next;
				slowPtr = slowPtr->next;
			}
			return fastPtr;
			break;
		}
	}

	return nullptr;
}
};

