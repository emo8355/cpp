// ConsoleApplication51.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void swaFrom(double a[], int size);

int main()
{
	double a[5];
	swaFrom(a, 5);
    return 0;
}

void swaFrom(double a[], int size) 
{
	int i, n;
	double temp;
	cout << "what is the size? : " << endl;
	cin >> size;
	for (i = 0; i < size; i++)
	{
		cout << "NUM: " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << "array: ";
	for (i = 0; i < size; i++)
	{
		cout << a[i];
	}
	cout << endl;
	if (a == 0)
		cout << "error" << endl;
	temp = a[0];
	a[0] = a[size - 1];
	a[size - 1] = temp;
	cout << "swap:";
	for (i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << " ";
}
