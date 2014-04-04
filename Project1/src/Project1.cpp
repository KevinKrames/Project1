//============================================================================
// Name        : Project1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>
#include <vector>
#include <string>
using namespace std;

int main() {
	bool mainloop = true;

	string inputString = "";

	while (mainloop) {
		//Short output string describing the program
		cout << "This program will be a fricken awesome calculator."
				<< endl;
		//Grab the input for value1 using a loop to error check
		bool loop1 = true;
		while (loop1) {
			try {
				//Output to console to tell the user to input
				cout
						<< "Input a command:";
				if (cin >> inputString) {
					if (inputString == "+") {
						loop1 = false;
						cout << endl;

						cin.clear();
						cin.ignore();
					} else {
						//Failed to receive input
						cin.clear();
						cin.ignore();
						throw 1;
					}

				} else {
					//Failed to receive input
					throw 1;
					cin.clear();
					cin.ignore();
				} // end cin >> inputString if statement

			} catch (int e) { // catch the errors
				if (e == 1) {
					cout << "Invalid input, try again." << endl;
				}
			}
		} // End loop1 while statement
		return 0;
	}
}
