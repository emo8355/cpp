// ConsoleApplication68.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void a(int ar[],int size)
{
	for (int i = 1; i < size; i++)
	{
		ar[i] = ar[i - 1];
	}
	for (int i = 0; i < size; i++)
		cout << ar[i] << " ";
}


int main()
{
	int list[] = { 1, 2, 3, 4, 5 };
	a(list, 6);
}
