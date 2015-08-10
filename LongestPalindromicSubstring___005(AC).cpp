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
			string tmpPal = centerErgodic(s, i, i);//current char as center
			if (tmpPal.length() > maxLength)
			{
				longestPal = tmpPal;
				maxLength = tmpPal.length();
			}

			tmpPal = centerErgodic(s, i, i + 1);//current blank as center
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
			left--;
			right++;
		}
		return s.substr(left+1, right - left +1 -2);//in last while loop, left-- & right++,so the start pos of the substr is left+1, the length is right-left+1-2
	}
	
};

/*
int main()
{
	string a = "abb";
	Solution so;
	so.longestPalindrome(a);
	return 0;
}
*/