#include "stdafx.h"
#include<iostream>

using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};

/*
	大数相加，注意进位的处理以及链表的基本操作即可。
*/
class Solution {
public:
	ListNode*  addTwoNumbers(ListNode* l1, ListNode* l2) {

		ListNode  *rear, *pnew;
		ListNode *first = new ListNode(0);
		rear = first;
		bool isCarry = false;
		while (l1 != NULL || l2 != NULL)
		{
			int  tmpNum1 = 0, tmpNum2 = 0;
			if (l1 != NULL)
			{
				tmpNum1 = l1->val;
				l1 = l1->next;
			}
			if (l2 != NULL)
			{
				tmpNum2 = l2->val;
				l2 = l2->next;
			}
			if (isCarry)
			{
				tmpNum1 += 1;
			}
			ListNode *pnew = new ListNode((tmpNum1 + tmpNum2) % 10);

			rear->next = pnew;
			rear = rear->next;
			if (tmpNum1 + tmpNum2 >= 10)
			{
				isCarry = true;
			}
			else
			{
				isCarry = false;
			}
		}
		if (isCarry)
		{
			rear->next = new ListNode(1);
		}
		return first->next;


	}
};

int main()
{
	ListNode *l1, *l2, *l3, *la, *lb, *lc, *lx;
	l1 = new ListNode(1);
	l2 = new ListNode(9);
	la = new ListNode(9);
	l1->next = l2;
	Solution sol;
	lx = sol.addTwoNumbers(l1, la);
	cout << l1->val << endl;
	int a = 0;
	cin >> a;
	return 0;
}