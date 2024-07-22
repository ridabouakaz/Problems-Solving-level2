#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
//  function work  to find the count of the most frequent item of an array
int most_frequent_item_count(vector<int> collection) {
	int cont = 0;
	for (int i = 0; i < collection.size(); i++)
	{
		int countt = 0;
		for (int j = 0; j < collection.size(); j++)
		{
			if (collection[i] == collection[j])
			{
				countt++;

			}

		}
		if (countt > cont)
		{
			cont = countt;
		}

	}

	return cont;




}


int main() {
	cout << most_frequent_item_count({ 3, -1, -1, -1, 2, 3, -1, 3, -1, 2, 4, 9, 3 });
	return 0;
}
/*Complete the function to find the count of the most frequent item of an array. You can assume that input is an array of integers. For an empty array return 0
Example

input array: [3, -1, -1, -1, 2, 3, -1, 3, -1, 2, 4, 9, 3]
ouptut: 5

The most frequent number in the array is -1 and it occurs 5 times.
*/
