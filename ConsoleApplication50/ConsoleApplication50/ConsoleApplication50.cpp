// ConsoleApplication50.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int countNum3s(int a[], int size);
void display();
void count(int a[]);

int main()
{
	display();
    return 0;
}

int countNum3s(int a[],int size) 
{
	cout << "Plz enter the value for array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "number " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << endl;
	count(a);
	return 3;
}

void display()
{
	int a[3];
	countNum3s(a, 3);
	cout << "Array: ";
	for (int j = 0; j < 3; j++)
		cout << a[j] << " ";
}

void count(int a[])
{
	int count = 0;
	for (int k = 0; k < 3; k++) 
	{
		if (a[k] == 3) 
		{
			count++;
		}
	}
	cout << "num of 3s: " << count << endl;
}