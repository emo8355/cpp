// ConsoleApplication58.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;


void takesint(int n);


int main()
{
	int a;
	cout << "Enter the value for n: ";
	cin >> a;
	takesint(a);
	cout << "\n";
	return 0;
}

void takesint(int n)
{
	if (n == 1)
	{
		cout << n << " , ";
	}
	else
	{
		takesint(n-1);
		cout << n << " , ";
	}

}