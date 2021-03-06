// lab 3_array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;


void input_array(int a[],int s);
void display_array(int a[], int s);
void calculate(int a[], int s);


int main()
{
	int size;
	cout << "Enter the size you want to input number: ";//user input number
	cin >> size;
	int *darray1 = new int[size];//class dynamic array
	input_array(darray1, size);//inout function
	cout << "here is the array 1: ";
	display_array(darray1, size);//display function
	cout << "here is the solution for array 1: " << endl;
	calculate(darray1, size);//get sum and avg function
	cout << "===========================================================" << endl;
	int *darray2 = new int[size * 2];
	for (int i = 0; i < 2*size; i++)
	{
		darray2[i] = darray1[i%size];//reapt input
	}
	cout << "here is the array 2: ";
	display_array(darray2, 2*size);
	cout << "here is the solution for array 2: " << endl;
	calculate(darray2, 2 * size);
	system("pause");
    return 0;
}

void input_array(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> a[i];
	}
}

void display_array(int a[],int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << a[i] << " , " ;
	}
	cout << endl;
}

void calculate(int a[], int s) 
{
	int sum = 0, avg;
	for (int i = 0; i < s; i++) 
	{
		sum += a[i];
	}
	avg = sum / s;
	cout << "Sum of array is: " << sum << endl;
	cout << "Average of array is: " << avg << endl;
}