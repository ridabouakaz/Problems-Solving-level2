#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include <string>
using namespace std;
//function work to returns true if the first argument(string) passed in ends with the 2nd argument (also a string). 
bool solution(string  str, string  ending) {
	if (ending.length() > str.length()) return false;
	return str.compare(str.length() - ending.length(), ending.length(), ending) == 0;
}
int main() {
	cout << solution("samurai", "ai");
	return 0;
}
/*Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false
*/