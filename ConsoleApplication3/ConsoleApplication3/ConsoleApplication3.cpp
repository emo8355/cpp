// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int numbersofcandies;
	double barweigth, totalweight;
	char candyname[10];
	cout << "press enter to continute";
	cout << "enter your favourite candy name: \n";
	cin >> candyname;
	cout << "enter the weight of " << candyname << endl;
	cin >> barweigth;
	cout << "enter the numbers of candies \n";
	cin >> numbersofcandies;
	totalweight = numbersofcandies * barweigth;
	cout << "the total weight of candies is : " << totalweight << "grams" << endl;

    return 0;
}

