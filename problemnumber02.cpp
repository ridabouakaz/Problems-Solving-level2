#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
// function return a string which includes all the letters in that range, including the last letter.
string gimme_the_letters(string sp)
{
	string result = "";
	for (int i = sp.front(); i <= sp.back(); i++)
	{
		result.push_back((i));
	}

	return result;
}


int main() {
	cout << gimme_the_letters("W-Y");
	return 0;
}
/*Given a string indicating a range of letters, return a string which includes all the letters in that range, including the last letter.
Note that if the range is given in capital letters, return the string in capitals also!
Examples

"a-z" ➞ "abcdefghijklmnopqrstuvwxyz"
"h-o" ➞ "hijklmno"
"Q-Z" ➞ "QRSTUVWXYZ"
"J-J" ➞ "J"

Notes

	A hyphen will separate the two letters in the string.
	You don't need to worry about error handling in this kata (i.e. both letters will be the same case and the second letter will not be before the first alphabetically).

*/
