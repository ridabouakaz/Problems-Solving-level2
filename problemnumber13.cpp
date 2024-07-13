#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
#include <string>
using namespace std;
//function to reverse a string while maintaining the spaces (if any) in their original place.
string solve(string s) {
	string words;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] != ' ')
		{
			words += s[i];
		}
		if (s[words.length()] == ' ')
		{
			words += ' ';
		}
	}


	return words;
}

int main() {
	cout << solve("your code rocks");
	return 0;
}
/*In this Kata, we are going to reverse a string while maintaining the spaces (if any) in their original place.

For example:

solve("our code") = "edo cruo"
-- Normal reversal without spaces is "edocruo".
-- However, there is a space at index 3, so the string becomes "edo cruo"

solve("your code rocks") = "skco redo cruoy".
solve("codewars") = "srawedoc"

More examples in the test cases. All input will be lower case letters and in some cases spaces.

Good luck!*/