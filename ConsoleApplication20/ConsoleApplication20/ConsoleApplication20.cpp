// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


/************************ Function Prototypes ************************/

// Function: makeChange
// Usage: makeChange(cents, dollars, quarters, dimes, nickels, pennies)
// In: cents
// Out: dollars, quarters, dimes, nickels, pennies
//
// Determines the amount of each unit to give as change.  Assumes
// you want to give as many of the larger coins/bills as possible
// before giving smaller ones.

// ADD THE FUNCTION PROTOTYPE HERE!
void make_change(int &cents, int &dollars, int &quarters, int &dimes, int &nickels, int &pennies ) {
	
	dollars = cents / 100;
	quarters = (cents % 100) / 25;
	dimes = (cents % 100) % 25) / 10;
	nickels =((cents % 100) % 25) % 10) / 5;
	pennies =( ((cents % 100) % 25) % 10) % 5) /1;
	
}


/*************************** Main Program **************************/

int main()
{
	int cents,
		dollars,
		quarters,
		dimes,
		nickels,
		pennies;

	cout << "How much change to make (in cents): ";
	cin >> cents;
	
	make_change(cents,dollars,quarters,dimes,nickels, pennies);
	

	// CALL THE FUNCTION HERE!

	cout << "\nYour change is:" << endl
		<< dollars << " dollars" << endl
		<< quarters << " quarters" << endl
		<< dimes << " dimes" << endl
		<< nickels << " nickels" << endl
		<< pennies << " pennies" << endl;
}

/*********************** Function Definitions **********************/

// Function: makeChange
//
// DESCRIBE HOW YOU IMPLEMENT IT HERE!

// ADD THE FUNCTION DEFINITION HERE!
