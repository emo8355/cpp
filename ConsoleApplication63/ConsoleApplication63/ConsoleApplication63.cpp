// ConsoleApplication63.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int sum,size;
	sum = 0;
	cout << "enter the size of an array: ";
	cin >> size;
	int *grade=new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << i+1 << " grade: ";
		cin >> grade[i];
		sum = sum + grade[i];
	}
	cout << sum << endl;


    return 0;
}

