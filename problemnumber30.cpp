#include<iostream>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;
//function  Check what if a string has the same amount of 'x's and 'o's.
bool XO(string str)
{
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	int result = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'x')
		{
			result++;
		}
		if (str[i] == 'o')
		{
			result--;
		}
	}
	return !result;
}

int main() {
	cout << XO("zzoo");
	return 1;
}
/*Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false

*/