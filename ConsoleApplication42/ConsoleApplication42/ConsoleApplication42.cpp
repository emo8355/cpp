// ConsoleApplication42.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a[4] = { 0,1,2,3 };
	int b[4];
	int temp;
	int j;
	int i;
	j = i - 1;
	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
	cout << "Reversed array using temp variable is: ";
	for (int i = 0; i < 4; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}
