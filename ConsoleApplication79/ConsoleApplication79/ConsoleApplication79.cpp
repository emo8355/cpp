// ConsoleApplication79.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	int total, total1, c1, c2;
	total = 0;
	total1 = 0;
	c1 = 0;
	c2 = 0;
	int n;
	clock_t start = clock();
	n = rand() % 10 + 1;
	cout << "Number of n = " << n << endl;
	for (int i = 1; i < n; i++)
	{
		total = total + n;
		c1 = i;
	}
	for (int i = 1; i < n; i++) 
	{
		for (int j = 1; j < i; j++) 
		{
			total1 = total1 + 1;
			c2 = i * j;
		}
	}

	clock_t finish = clock();
	double overallTime = static_cast<double>(finish-start) /(CLOCKS_PER_SEC);
	cout << "comparison counter 1 = " << c1 << "    " << "comparison counter 2 = " << c2 << endl;
	cout << "over all time = " << overallTime << endl;
	system("pause");
    return 0;
}

