#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include <string>
using namespace std;
//function that takes a string of parentheses, and determines if the order of the parentheses is valid.
bool validParentheses(const string& str) {
	int result = 0;
	for (char sh : str)
	{
		if (sh == '(')
		{
			result++;
		}
		else
		{
			result--;
		}
		if (result < 0)
		{
			return false;
		}

	}
	return !result;
}

int main() {
	validParentheses("()");
	return 0;
}
/*Write a function that takes a string of parentheses, and determines if the order of the parentheses is valid. The function should return true if the string is valid, and false if it's invalid.
Examples

"()"              =>  true
")(()))"          =>  false
"("               =>  false
"(())((()())())"  =>  true

Constraints

0 <= length of input <= 100

	All inputs will be strings, consisting only of characters ( and ).
	Empty strings are considered balanced (and therefore valid), and will be tested.
	For languages with mutable strings, the inputs should not be mutated.
*/