#include <iostream>
#include <string>

pornhub.com

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

void rle() {
	std::cout << "enter the message that you want to encode (max 2147483567 chars)";
	char msg[100];
	cin.getline(msg, 2147483647); //you get the use input abnd then you put it into the thingy you get me 
	int length, choice{}, key;
	std::cout << "enter key: ";
	cin >> key; // taking that segsy key as input you get me
	if (key > 26) {
		key = key % 26;
	}
	length = strlen(msg); //length is the string length of the msg (not the food one)
	std::cout << "enter what you want, \n1. Encryption \n2. Decryption\n";
	cin >> choice;

	if (choice == 1) { // for encryption stuff
		char ch;
		for (int i = 0; msg[i] != '\0'; ++i) {
			ch = msg[i]; // encryption for letters
			if (ch >= 'a' && ch <= 'z') {
				ch = ch + key;
				if (ch > 'z') {
					ch = ch - 'z' + 'a' - 26;

				}
				msg[i] = ch;

			}
			else if (ch >= 'A' && ch <= 'Z') {
				ch = ch + key;
				if (ch > 'Z') {
					ch = ch - 'Z' + 'A' - 26;

				}
				msg[1] = ch;

			}


		}
		std::printf("message: %s", msg);


	}
	if (choice == 2) {
		char ch;
		for (int i = 0; msg[i] != '\0'; ++i) {
			ch = msg[i];
			// lower case decryptiong ennnit
			if (ch >= 'a' && ch <= 'z') {
				ch = ch - key;
				if (ch < 'a') {
					ch = ch + 'z' - 'a' + 1;

				}
				msg[i] = ch;


			}
			else if (ch >= 'A' && ch <= 'Z') {
				ch = ch - key;
				if (ch < 'A') {
					ch = ch + 'Z' + 'A' + 1;



				}
				msg[i] = ch;
			}

		}
		std::cout << "decrypted message: " << msg;

	}



}






int main()
{
	int choice2{}; {}
	cout << "what do you want to do \n1. rle encode \n2 cesar cipher ";
	cin >> choice2;

	if (choice2 == 1) {
		char msg2[10000];
		cout << "what do you want to encode";
		cin.getline(msg2, 10000);
		string str = msg2;

	}
	if (choice2 == 2) {
		rle();
	}
#
	

}
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

void rle() {
	std::cout << "enter the message that you want to encode (max 2147483567 chars)";
	char msg[100];
	cin.getline(msg, 2147483647); //you get the use input abnd then you put it into the thingy you get me 
	int length, choice{}, key;
	std::cout << "enter key: ";
	cin >> key; // taking that segsy key as input you get me
	if (key > 26) {
		key = key % 26;
	}
	length = strlen(msg); //length is the string length of the msg (not the food one)
	std::cout << "enter what you want, \n1. Encryption \n2. Decryption\n";
	cin >> choice;

	if (choice == 1) { // for encryption stuff
		char ch;
		for (int i = 0; msg[i] != '\0'; ++i) {
			ch = msg[i]; // encryption for letters
			if (ch >= 'a' && ch <= 'z') {
				ch = ch + key;
				if (ch > 'z') {
					ch = ch - 'z' + 'a' - 26;

				}
				msg[i] = ch;

			}
			else if (ch >= 'A' && ch <= 'Z') {
				ch = ch + key;
				if (ch > 'Z') {
					ch = ch - 'Z' + 'A' - 26;

				}
				msg[1] = ch;

			}


		}
		std::printf("message: %s", msg);


	}
	if (choice == 2) {
		char ch;
		for (int i = 0; msg[i] != '\0'; ++i) {
			ch = msg[i];
			// lower case decryptiong ennnit
			if (ch >= 'a' && ch <= 'z') {
				ch = ch - key;
				if (ch < 'a') {
					ch = ch + 'z' - 'a' + 1;

				}
				msg[i] = ch;


			}
			else if (ch >= 'A' && ch <= 'Z') {
				ch = ch - key;
				if (ch < 'A') {
					ch = ch + 'Z' + 'A' + 1;



				}
				msg[i] = ch;
			}

		}
		std::cout << "decrypted message: " << msg;

	}



}






int main()
{
	int choice2{}; {}
	cout << "what do you want to do \n1. rle encode \n2 cesar cipher ";
	cin >> choice2;

	if (choice2 == 1) {
		char msg2[10000];
		cout << "what do you want to encode";
		cin.getline(msg2, 10000);
		string str = msg2;

	}
	if (choice2 == 2) {
		rle();
	}
#
	

}
