// ConsoleApplication48.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a[4];
	int temp;

	cout << "This is the original array: ";
	for (int i = 0; i < 4; i++)
	{
		cout << "number " << i+1<<": ";
		cin >> a[i];
	}
	cout << endl;

	//reverse array start in here
	for (int i = 0; i < 4 / 2; i++) {
		temp = a[i];
		a[i] = a[4 - i-1];
		a[4 - i-1] = temp;
	}

	cout << "Reversed array using temp variable is: ";
	for (int i = 0; i < 4; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}