#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
// function calcul integer representing the total distance travelled for visiting each floor in the array in order. 
int elevator_distance(vector<int> array) {
	int result = 0;
	for (int i = 0; i < array.size() - 1; i++)
	{
		if (array[i] < array[i + 1])
		{
			result += array[i + 1] - array[i];
		}
		else
		{
			result += array[i] - array[i + 1];
		}
	}
	return result;
}


int main() {
	cout << elevator_distance({ 1, 2, 3 });
	return 0;
}
/*Imagine you start on the 5th floor of a building, then travel down to the 2nd floor, then back up to the 8th floor. You have travelled a total of 3 + 6 = 9 floors of distance.

Given an array representing a series of floors you must reach by elevator, return an integer representing the total distance travelled for visiting each floor in the array in order.

// simple examples
elevatorDistance([5,2,8]) = 9
elevatorDistance([1,2,3]) = 2
elevatorDistance([7,1,7,1]) = 18

// if two consecutive floors are the same,
//distance travelled between them is 0
elevatorDistance([3,3]) = 0

Array will always contain at least 2 floors. Random tests will contain 2-20 elements in array, and floor values between 0 and 30.
*/
