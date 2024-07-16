#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
#include <string>
using namespace std;
//function work to sum number and check if sum number is bigger from hd
int save(vector<int> sizes, int hd) {
	int result = 0;
	int temp = 0;
	for (int i = 0; i < sizes.size(); i++)
	{
		temp += sizes[i];
		if (temp <= hd)
		{
			result++;
		}

	}
	return result;
}

int main() {
	cout << save({}, 1);
	return 0;
}
/*Your task is to determine how many files of the copy queue you will be able to save into your Hard Disk Drive. The files must be saved in the order they appear in the queue.

Zero size files can always be saved even HD full.
Input:

	Array of file sizes (0 <= s <= 100)
	Capacity of the HD (0 <= c <= 500)

Output:

	Number of files that can be fully saved in the HD.

Examples:

save([4,4,4,3,3], 12) -> 3
# 4+4+4 <= 12, but 4+4+4+3 > 12

save([4,4,4,3,3], 11) -> 2
# 4+4 <= 11, but 4+4+4 > 11

save([12, 0, 0, 1], 12) -> 3
# 12+0+0 <= 12, but 12+0+0+1 > 12

Do not expect any negative or invalid inputs.
*/
