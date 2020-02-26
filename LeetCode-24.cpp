/*************************************************************************
	> File Name: LeetCode-24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 12时48分57秒
 *class Solution {
    public ListNode swapPairs(ListNode head) {
        ListNode pre = new ListNode(0);
        pre.next = head;
        ListNode temp = pre;
        while(temp.next != null && temp.next.next != null) {
            ListNode start = temp.next;
            ListNode end = temp.next.next;
            temp.next = end;
            start.next = end.next;
            end.next = start;
            temp = start;
        }
        return pre.next;
    }
}

