#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
#include <string>
using namespace std;
//function work to  to return the middle character of the word If the word's length is odd and If the word's length is even, return the middle 2 characters.
string get_middle(string input) {
	int result = 0;
	string words = "";
	for (int i = 0; i < input.size(); i++)
	{
		result = +i;
	}
	result = result + 1;
	if (result % 2 == 0)
	{
		words += input[(result / 2) - 1];
		words += input[result / 2];
	}
	else
	{
		words += input[(result - 1) / 2];

	}

	return words;
}

int main() {
	cout << get_middle("middle");
	return 0;
}
/*You are going to be given a word. Your job is to return the middle character of the word. If the word's length is odd, return the middle character. If the word's length is even, return the middle 2 characters.

#Examples:

Kata.getMiddle("test") should return "es"

Kata.getMiddle("testing") should return "t"

Kata.getMiddle("middle") should return "dd"

Kata.getMiddle("A") should return "A"

#Input

A word (string) of length 0 < str < 1000 (In javascript you may get slightly more than 1000 in some test cases due to an error in the test cases). You do not need to test for this. This is only here to tell you that you do not need to worry about your solution timing out.*/