#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include <string>
using namespace std;
// function work to output its reverse digits
long long reverseNumber(long long n) {
	string sn = to_string(n);
	if (n < 0)
	{
		reverse(sn.begin(), sn.end());
		int tsn = stoi(sn) * -1;
		return tsn;
	}
	else
	{
		reverse(sn.begin(), sn.end());
		int tsn = stoi(sn);
		return tsn;
	}
}

int main() {
	cout << reverseNumber(1000);
	return 1;
}
/*Given a number, write a function to output its reverse digits. (e.g. given 123 the answer is 321)

Numbers should preserve their sign; i.e. a negative number should still be negative when reversed.
Examples

 123 ->  321
-456 -> -654
1000 ->    1

*/