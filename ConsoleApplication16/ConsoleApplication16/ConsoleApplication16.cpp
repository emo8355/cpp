// ConsoleApplication16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i, j;

	cout << "plz enter the first value: ";
	cin >> i;
	cout << "Next, the second value:";
	cin >> j;

	float out1 = sqrt(i);
	float out2 = sqrt(j);

	cout << "The first is: " << out1 << " the second is: " << out2 << endl;



    return 0;
}

