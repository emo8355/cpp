// ConsoleApplication67.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)//input num
	{
		cout << "num " << i+1 << ": ";
		cin >> a[i];
	}
	for (int i = 0; i<10; i++)//print and check
	{
		int j;
		for (j = 0; j<i; j++)//pick num to check
			if (a[i] == a[j])
				break;
		if (i == j)//if it is the same, only print once
			cout << a[i] << " ";
	}

	return 0;
}
