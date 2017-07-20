#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	/*
	cout << "Hello World" << endl;

	int largestNum = (5>2) ? 5 : 2;

	cout << "The largest is: " << largestNum << endl;
	*/

	string strNumberGuessed;
	int intNumberGuessed = 0;

	do {

		cout << "Guess a number between 1 and 10 ..." << endl;

		getline(cin, strNumberGuessed);

		intNumberGuessed = stoi(strNumberGuessed);

	} while (intNumberGuessed != 4);

	cout << "You win!" << endl;
	
	return 0;

}