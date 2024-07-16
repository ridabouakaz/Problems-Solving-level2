#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
#include <string>
using namespace std;
//function reverse the portion of that string between those two indices inclusive
string solve(string s, int a, int b) {
	if (b < s.size())
	{
		reverse(s.begin() + a, s.begin() + b + 1);
	}
	else
	{
		reverse(s.begin() + a, s.end());

	}

	return s;
}

int main() {
	cout << solve("FunctionalProgramming", 2, 15);
	return 0;
}
/*In this Kata, you will be given a string and two indexes (a and b). Your task is to reverse the portion of that string between those two indices inclusive.

solve("codewars",1,5) = "cawedors" -- elements at index 1 to 5 inclusive are "odewa". So we reverse them.
solve("cODEWArs", 1,5) = "cAWEDOrs" -- to help visualize.

Input will be lowercase and uppercase letters only.

The first index a will always be lower that than the string length; the second index b can be greater than the string length. More examples in the test cases. Good luck!*/