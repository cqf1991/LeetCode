



#include"stdafx.h"
#include<iostream>
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



int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

