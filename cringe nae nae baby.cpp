#include <iostream>
#include <string>


using namespace std;
string encode(string str)
{
	// stores output string
	string encoding = "";
	int count;

	for (int i = 0; str[i]; i++)
	{
		// the counting starts at i and ends when it changes becuase while loop = poggers
		count = 1;
		while (str[i] == str[i + 1]) //while i == i+1 in the arrays keeps going then it ends when it changes because lmao
			count++, i++; // when i = i+1 then increment counta and i buy 1 which is poggers

		// makes encoding appened the string of i 
		encoding += to_string(count) + str[i];
	}

	return encoding; // returns the damn thing 
}

