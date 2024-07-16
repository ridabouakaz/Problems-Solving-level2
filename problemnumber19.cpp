#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
#include <string>
using namespace std;
//function return output the screen dimensions as a string written as WIDTH x HEIGHT.
string find_screen_height(int width, string ratio) {
	int i = ratio.find(":");
	int ratiow = stoi(ratio.substr(0, i));
	int hegith = stoi(ratio.substr(i + 1));
	int total = (width * hegith) / ratiow;
	return to_string(width) + "x" + to_string(total);
}

int main() {
	cout << find_screen_height(1024, "4:3");
	return 0;
}
/*Cheesy Cheeseman just got a new monitor! He is happy with it, but he just discovered that his old desktop wallpaper no longer fits. He wants to find a new wallpaper, but does not know which size wallpaper he should be looking for, and alas, he just threw out the new monitor's box. Luckily he remembers the width and the aspect ratio of the monitor from when Bob Mortimer sold it to him. Can you help Cheesy out?
The Challenge

Given an integer width and a string ratio written as WIDTH:HEIGHT, output the screen dimensions as a string written as WIDTHxHEIGHT.

Note: The calculated height should be represented as an integer. If the height is fractional, truncate it.
*/
