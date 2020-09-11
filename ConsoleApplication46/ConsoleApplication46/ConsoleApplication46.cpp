// ConsoleApplication46.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int a, int b);
void shiftright(int array[], int size);
void replace(int array[], int size);

int main()
{
	int array[] = { 1, 4, 9, 16, 25 };

	cout << "original: ";
	cout << array[0] << " " << array[4] << endl;
	swap(array[0], array[4]);//call function,qustion a
	cout << "swap: ";
	cout << array[0] << " " << array[4] << endl;

	shiftright(array, 5);//call function, question b
	replace(array, 5);//call function, question c
}

void swap(int a, int b) 
{
	int temp = a;
	a = b;
	b = temp;
}

void shiftright(int array[], int size)
{
	int temp, temp1;
	temp= array[size - 1];
	cout << "shift right function: ";
	for (int i = 0; i < size; i++)
	{
		temp1 = array[i];
		array[i] = temp;
		temp = temp1;
		cout << array[i]<<" ";
	}
	cout << endl;
}

void replace(int array[], int size)
{
	cout << "Replace all elements with 7 in array: ";
	for (int i = 0; i < 5; i++)
	{
		array[i] =7;
		cout << array[i] << " ";
	}
}