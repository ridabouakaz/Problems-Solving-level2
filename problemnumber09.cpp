#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
#include <string>
using namespace std;
// function work to  the difference between the count of even numbers and the count of odd numbers
int solve(vector<string>v)
{
	int result = 0;
	for (string str : v)
	{
		if (isdigit(str.front()))
		{

			if (stoi(str) % 2 == 0)
			{
				result++;
			}
			else
			{
				result--;
			}
		}

	}
	return result;

}

int main() {
	cout << solve({ "5", "15", "16", "10", "6", "4", "16", "t", "13", "n", "14", "k", "n", "0", "q", "d", "7", "9" });
	return 0;
}
/*Given an array, return the difference between the count of even numbers and the count of odd numbers. 0 will be considered an even number.

For example:
solve([0,1,2,3]) = 0 because there are two even numbers and two odd numbers. Even - Odd = 2 - 2 = 0.

Let's now add two letters to the last example:

solve([0,1,2,3,'a','b']) = 0. Again, Even - Odd = 2 - 2 = 0. Ignore letters.

The input will be an array of lowercase letters and numbers only.

In some languages (Haskell, C++, and others), input will be an array of strings:

solve ["0","1","2","3","a","b"] = 0

Good luck!

If you like this Kata, please try: */