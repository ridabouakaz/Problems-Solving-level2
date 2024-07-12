#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
#include <string>
using namespace std;
// function return all the possible sum of two digits of it.
vector<int> digits(int n) {
	vector<int>result;
	string names = to_string(n);
	for (int i = 0; i < names.length(); i++)
	{
		for (int j = i + 1; j < names.length(); j++)
		{
			result.push_back((names[i] - 48) + (names[j] - 48));
		}
	}
	return result;


}

int main() {
	digits(156);
	return 0;
}
/*Given a long number, return all the possible sum of two digits of it.

For example, 12345: all possible sum of two digits from that number are:

[ 1 + 2, 1 + 3, 1 + 4, 1 + 5, 2 + 3, 2 + 4, 2 + 5, 3 + 4, 3 + 5, 4 + 5 ]

Therefore the result must be:

[ 3, 4, 5, 6, 5, 6, 7, 7, 8, 9 ]

*/