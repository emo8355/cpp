// ConsoleApplication39.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void F1(int list1[],int size);


int main()
{
	int list1[4] = { 2,9,15,31 };
	F1(list1,4);
	return 0;
}

void F1(int list1[], int size)
{
	
	for (int i = 0; i < size; i++)
	{
		list1[i] = list1[i] + 2;
		cout << list1[i] << " ";

	}
}



