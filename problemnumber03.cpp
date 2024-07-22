#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
// function  return an array of the number of letters that occupy their positions in the alphabet for each word.
vector<int> solve(vector<string> arr)
{
	vector<int>result;
	int conti = 0;
	for (string words : arr) {
		for (int i = 0; i < words.size(); i++)
		{
			if (words[i] == i + 97 || words[i] == i + 65 || )
			{
				conti++;
			}
			conti = 0;
		}
		result.push_back(conti);
	}
	return result;
}


int main() {
	solve({ "abode", "ABc", "xyzD" });
	return 0;
}
/*Consider the word "abode". We can see that the letter a is in position 1 and b is in position 2. In the alphabet, a and b are also in positions 1 and 2. Notice also that d and e in abode occupy the positions they would occupy in the alphabet, which are positions 4 and 5.

Given an array of words, return an array of the number of letters that occupy their positions in the alphabet for each word. For example,

solve(["abode","ABc","xyzD"]) = [4, 3, 1]

See test cases for more examples.

Input will consist of alphabet characters, both uppercase and lowercase. No spaces.

Good luck!*/
