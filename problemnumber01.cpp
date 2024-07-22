#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
// function  return the sum of the numbers that occur only once.
int repeats(vector<int>v) {

	int result = 0;
	sort(v.begin(), v.end());
	for (int num : v) {
		if (count(v.begin(),v.end(),num)==1)
		{
			result += num;
		}
	}
	return result;
}


int main() {
	cout << repeats({ 4,5,7,5,4,8 });
	return 0;
}
/*In this Kata, you will be given an array of numbers in which two numbers occur once and the rest occur only twice. Your task will be to return the sum of the numbers that occur only once.

For example, repeats([4,5,7,5,4,8]) = 15 because only the numbers 7 and 8 occur once, and their sum is 15. Every other number occurs twice.

More examples in the test cases.

Good luck!

If you like this Kata, please try: */
