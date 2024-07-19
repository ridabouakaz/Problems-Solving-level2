#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include <string>
using namespace std;
//function return an array / a list of the individual digits in order.
vector<int> digitize(int n) {
	vector<int> resutl;
	string sn = to_string(n);
	if (n == 0) {
		resutl.push_back(0);
	}
	if (n > 0)
	{
		for (char ss : sn) {
			resutl.push_back(ss - '0');
		}
	}
	return resutl;
}

int main() {
	digitize(5);
	return 0;
}
/*Given a non-negative integer, return an array / a list of the individual digits in order.

Examples:

123 => {1,2,3}

1 => {1}

8675309 => {8,6,7,5,3,0,9}
*/