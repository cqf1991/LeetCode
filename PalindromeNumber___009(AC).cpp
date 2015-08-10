/*Palindrome Number:

Determine whether an integer is a palindrome. Do this without extra space.

Some hints:

Could negative integers be palindromes? (ie, -1)

If you are thinking of converting the integer to string, note the restriction of using extra space.

You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?

There is a more generic way of solving this problem.
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
class Solution {
public:
	bool isPalindrome(int x) {
		int rev = 0;
		int sour = x;
		int hight = 1;
		if (x < 0)
			return false;
		//else if (x < 10)
			//return true;
		while (sour/hight>=10)
		{
			hight *= 10;
		}
		sour = x;
		for (hight; sour != 0; sour = sour / 10)
		{
			int tmp = sour % 10;
			rev += tmp*hight;
			hight /= 10;
		}
		if (x == rev)
			return true;
		else
			return false;
	}
};
int main()
{
	int a =0;
	Solution pal;
	cout << pal.isPalindrome(a) << endl;
	return 0;
}