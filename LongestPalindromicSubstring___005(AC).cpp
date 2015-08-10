/*Longest Palindromic Substring :

Given a string S, find the longest palindromic substring in S. 

You may assume that the maximum length of S is 1000, and there exists one unique longest palindromic substring.
*/
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
	string longestPalindrome(string s) {
		int maxLength = 0;
		string longestPal;
		for (int i = 0; i < s.size(); i++)
		{
			string tmpPal = centerErgodic(s, i, i);//当前字符元素为中心点
			if (tmpPal.length() > maxLength)
			{
				longestPal = tmpPal;
				maxLength = tmpPal.length();
			}

			tmpPal = centerErgodic(s, i, i + 1);//当前""元素为中心点
			if (tmpPal.length() > maxLength)
			{
				longestPal = tmpPal;
				maxLength = tmpPal.length();
			}

			
		}
		return longestPal;

	}
	string centerErgodic(string s, int left, int right)
	{
		while (left >= 0 && right <= s.size() - 1 && s[left] ==s[right])
		{
			left--;//left --后 return left+1
			right++;//left-- right ++ 后 return right-left-1  （相当于return right-left+1-2）
		}
		return s.substr(left+1, right - left +1 -2);//while中的left和right最后被分配到2个非回文字符，需要去掉这2个
	}
	
};

int main()
{
	string a = "abb";
	Solution so;
	so.longestPalindrome(a);
	return 0;
}