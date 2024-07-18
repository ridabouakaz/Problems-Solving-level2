#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include <string>
using namespace std;
//function that takes a string argument and returns that same string with all vowels removed 
string remove_vowels(string str) {
	string srd = "";
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			continue;
		}
		else
		{
			srd += str[i];
		}

	}
	return srd;
}

int main() {
	cout << remove_vowels("adaddffg");
	return 0;
}
/*This Kata is intended as a small challenge for my students

Create a function that takes a string argument and returns that same string with all vowels removed (vowels are "a", "e", "i", "o", "u").

Example (Input --> Output)

"drake" --> "drk"
"aeiou" --> ""

remove_vowels("drake") // => "drk"
remove_vowels("aeiou") // => ""

*/