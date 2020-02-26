/*************************************************************************
	> File Name: LeetCode-141.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 12时57分17秒
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
bool hasCycle(ListNode* head) 
{
	//两个运动员位于同意起点head
	ListNode* faster{ head };  //快的运动员
	ListNode* slower{ head };  //慢的运动员

	if (head == NULL)  //输入链表为空，必然不是循环链表
		return false;

	while (faster != NULL && faster->next != NULL)
	{
		faster = faster->next->next;  //快的运动员每次跑两步
		slower = slower->next;  //慢的运动员每次跑一步
		if (faster == slower)  //他们在比赛中相遇了
			return true;  //可以断定是环形道，直道不可能相遇
	}
	return false;  //快的运动员到终点了，那就是直道，绕圈跑不会有终点
}
};

