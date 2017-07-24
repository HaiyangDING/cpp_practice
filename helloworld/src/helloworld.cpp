#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	/* 
	// try ? operator
	cout << "Hello World" << endl;

	int largestNum = (5>2) ? 5 : 2;

	cout << "The largest is: " << largestNum << endl;
	*/

	/* 

	// try while
	string strNumberGuessed;
	int intNumberGuessed = 0;

	do {

		cout << "Guess a number between 1 and 10 ..." << endl;

		getline(cin, strNumberGuessed);

		intNumberGuessed = stoi(strNumberGuessed);

	} while (intNumberGuessed != 4);

	cout << "You win!" << endl;
	*/

	// try pointer

	int badNums[5] = {1, 4, 6, 7, 8};

	int* badNumsPtr = badNums;

	cout << "badNumsPtr \n address(badNumsPtr): \t" << badNumsPtr << "\n Value(*badNumsPtr): \t" << *badNumsPtr << endl;
	cout << "badNums \n address(&badNums): \t" << &badNums  << "\n array name(badNums): \t" << badNums << "\n value(*badNums): \t" << *badNums << endl;

	badNumsPtr ++;
	cout << "after `badNumsPtr ++;`" << endl;

	cout << "badNumsPtr \n address(badNumsPtr): \t" << badNumsPtr << "\n Value(*badNumsPtr): \t" << *badNumsPtr << endl;
	cout << "badNums \n address(&badNums): \t" << &badNums  << "\n array name(badNums): \t" << badNums << "\n value(*badNums): \t" << *badNums << endl;

	return 0;

}