#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
#include <string>
using namespace std;
// function Convert 12-hour time to 24-hour time
string to24HourTime(int hour, int minute, string period) {
	if (period == "am" && hour == 12)
	{
		hour = 0;
	}
	else if (period == "pm" && hour < 12)
	{
		hour += 12;
	}
	string result;
	if (hour < 10) result += "0";
	result += to_string(hour);
	if (minute < 10) result += "0";
	result += to_string(minute);
	return result;
}

int main() {
	cout << to24HourTime(2, 15, "am");
	return 0;
}
/*Converting a 12-hour time like "8:30 am" or "8:30 pm" to 24-hour time (like "0830" or "2030") sounds easy enough, right? Well, let's see if you can do it!

You will have to define a function, which will be given an hour (always in the range of 1 to 12, inclusive), a minute (always in the range of 0 to 59, inclusive), and a period (either a.m. or p.m.) as input.

Your task is to return a four-digit string that encodes that time in 24-hour time.
Notes

	By convention, noon is 12:00 pm, and midnight is 12:00 am.
	On 12-hours clock, there is no 0 hour, and time just after midnight is denoted as, for example, 12:15 am. On 24-hour clock, this translates to 0015.

*/