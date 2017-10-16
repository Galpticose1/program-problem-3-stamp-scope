/*

Vineel Gajjala - 10/16/17

Assignment Name : Three Digit Ascending Descending Loop

storing three variables, print out ascending or descending based on if > or < than previous digit
And then looping that code 30 times

*/

// Libraries

#include <iostream> <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {

	for (int i = 0; i < 30; i++) {
		int Three_Int, Int_One, Int_Two, Int_Three;
		cout << "Enter a three digit number" << endl;
		cin >> Three_Int;
		Int_One = Three_Int % 10; // far right
		Int_Two = (Three_Int / 10) % 10; // middle
		Int_Three = (Three_Int / 100) % 100; // far left

		if ((Int_One > Int_Two) && (Int_Two > Int_Three)) {
			cout << "Ascending" << endl;
		}

		else if ((Int_Three > Int_Two) && (Int_Two > Int_One)) {
			cout << "Descending" << endl;
		}
		else {
			cout << "Neither" << endl;
		}
	}
	pause(); // pauses to see the displayed text
}
