#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include <string>
using namespace std;
//function work to capitalize the letters that occupy even indexes and odd indexes separately
pair<string, string> capitalize(string s)
{
	string words1;
	string words2;
	for (int i = 0; i < s.length(); i++)
	{
		if (i % 2 == 0)
		{
			words1 += char(s[i] + 32);
			words2 += s[i];
		}
		else
		{
			words2 += char(s[i] + 32);
			words1 += s[i];
		}


	}

	return { words1, words2 };
}

int main() {
	capitalize("abcdef");
	return 0;
}
/*Given a string, capitalize the letters that occupy even indexes and odd indexes separately, and return as shown below. Index 0 will be considered even.

For example, capitalize("abcdef") = ['AbCdEf', 'aBcDeF']. See test cases for more examples.

The input will be a lowercase string with no spaces.

Good luck!

If you like this Kata, please try: */