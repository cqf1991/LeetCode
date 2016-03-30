/*
RemoveNthNodeFromEndofList

Given a linked list, remove the nth node from the end of list and return its head.

For example,

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.

Note:
Given n will always be valid.
Try to do this in one pass.
*/
#include"stdafx.h"
#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode *first = head;
		ListNode *second = head;
		for (int i = 0; i < n; i++)
		{
			first = first->next;
		}
		if (first == NULL)
			return head->next;// Nth node is the first one
		while (first->next != NULL)
		{
			first = first->next;
			second = second->next;
		}
		second->next = second->next->next;
		return head;
	}
};

int main()
{
	ListNode *anode = new ListNode(1);
	//anode->next = new ListNode(2);
	Solution pal;
	cout << pal.removeNthFromEnd(anode, 1) << endl;
	return 0;
}