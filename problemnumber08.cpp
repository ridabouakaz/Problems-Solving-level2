#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
#include<cmath>
using namespace std;
// function work to  new array of length number containing the last even numbers from the original array (in the same order)
vector<int> evenNumbers(vector<int> arr, int n) {
	vector<int>result;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % 2 == 0)
		{
			result.push_back(arr[i]);
		}

	}
	vector<int>resulttotal(result.end() - n, result.end());
	return resulttotal;

}

int main() {
	evenNumbers(10);
	return 0;
}
/*Given an array of numbers, return a new array of length number containing the last even numbers from the original array (in the same order). The original array will be not empty and will contain at least "number" even numbers.

For example:

([1, 2, 3, 4, 5, 6, 7, 8, 9], 3) => [4, 6, 8]
([-22, 5, 3, 11, 26, -6, -7, -8, -9, -8, 26], 2) => [-8, 26]
([6, -25, 3, 7, 5, 5, 7, -3, 23], 1) => [6]

*/