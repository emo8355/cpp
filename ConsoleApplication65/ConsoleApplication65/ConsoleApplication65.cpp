// ConsoleApplication65.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
//Find the max and min num
int main()
{
	int smallest = INT_MAX;
	int largest = 0;
	srand(time(NULL));
	cout << "NUM: " << endl;
	for (int x = 0; x < 50; x++)
	{
		int Number = rand() % 1000 + 1;
		cout << Number << " ";
		if (Number > largest)
		{
			largest = Number;
		}

		if (Number  < smallest)
		{
			smallest = Number;
		}
	}

	cout << "Smallest number: " << smallest;
	cout << "Largest number:" << largest;
	return 0;

}

