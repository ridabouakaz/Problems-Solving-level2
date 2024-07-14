#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
#include <string>
using namespace std;
//function that calculates the sum of the integers inside a string
int sumOfIntegers(string str) {
	int result = 0;
	int resulttimer = 0;
	for (char s : str)
	{
		if (isdigit(s))
		{
			resulttimer = resulttimer * 10 + (s - '0');
		}
		else
		{
			result += resulttimer;
			resulttimer = 0;
		}

	}
	result += resulttimer;
	return result;
}

int main() {
	cout << sumOfIntegers("The Great Depression lasted from 1929 to 1939.");
	return 0;
}
/*Your task in this kata is to implement a function that calculates the sum of the integers inside a string. For example, in the string "The30quick20brown10f0x1203jumps914ov3r1349the102l4zy dog", the sum of the integers is 3635.

Note: only positive integers will be tested.
*/