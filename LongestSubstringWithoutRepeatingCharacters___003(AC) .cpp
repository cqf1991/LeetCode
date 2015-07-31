/*
Longest Substring Without Repeating Characters:

Given a string, find the length of the longest substring without repeating characters.

For example, the longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3.

For "bbbbb" the longest substring is "b", with the length of 1.
*/
#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		bool isExists[256] = { false }; // 8-bit ascii has 256 elems.
		int start = 0, max_len = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (!isExists[s[i]])
			{
				isExists[s[i]] = true;
				max_len = max_len > (i - start + 1) ? max_len : (i - start + 1);
			}
			else
			{
				while (s[start] != s[i])// move start to the next elem after exist s[i]
				{
					isExists[s[start]] = false;// before start isExist[X] is false
					start++;
				}
				start++;
			}
		}
		return max_len;
	}
	int lengthOfLongestSubstring2(string s) {
		int existLoc[256] ; // 8-bit ascii has 256 elems.
		memset(existLoc, -1, 256 * sizeof(int));
		int idx = -1, max_len = 0; // idx is 1 index before the substring index like "abcabc":(idx point first "c")
		for (int i = 0; i < s.size(); i++)
		{
			if (existLoc[s[i]] > idx)
			{
				idx = existLoc[s[i]];
			}
			max_len = max_len > (i - idx) ? max_len : (i - idx);// first time: 0+1=1
			existLoc[s[i]] = i;// mark elem loction in existLoc
		}
		return max_len;
	}

};

int main()
{
	string sub = "";
	string a = "c";
	cout << sub.find("a");
	Solution so;
	so.lengthOfLongestSubstring2(a);
	return 0;
}