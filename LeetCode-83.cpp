/*************************************************************************
	> File Name: LeetCode-83.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 12时56分51秒
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
    ListNode* deleteDuplicates(ListNode* head) 
    {
    if(head == NULL)  //如果所给链表为空直接返回，否则在执行ptr->next这部操作时会因为ptr为NULL而造成执行时错误
        return head;
	ListNode* ptr{ head };  //遍历的指针
	while (ptr->next != NULL)  //遍历首个元素到第倒数第二个元素，因为是逐个向后比较，最后一个元素会被比较到，这样是正确的
	{
		if (ptr->val == ptr->next->val)  //和后一个元素比较
		{
			ListNode* p = ptr->next;  
			ptr->next = p->next;  //删除操作
			delete p;  //释放空间
		}
		else
		{
			ptr = ptr->next;  //移动到后一个元素
		}
	}
	return head;  //返回首个节点
    }
};

