// ConsoleApplication43.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n[200];
	int mymaximum = 0;
	for (int i = 0; i <200; ++i)
	{
		n[i] = rand() % 100 + 1;
		cout << n[i] << " ";
		if (n[i] > mymaximum)
		{
			mymaximum = n[i];
		}
	}
	cout << endl;
	cout << "The Max is: " << mymaximum << "\n";
	return 0;
}

