// write name backward.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
using namespace std;

void display_arr(int ar[],int size);
void num_back(int a[], int start, int size); //function protoype


int main()
{
	int size;
	cout << "What is size of an array: ";//ask user to customize size 
	cin >> size;
	int *b = new int[size];
	cout << "Enter the number for array(1 2 3...): ";
	for (int i = 0; i < size; i++)//input num
		cin >> b[i];

	cout << "Original array: ";
	display_arr(b, size);

	cout << "\nreverse array: ";
	num_back(b, 0, size - 1);
	display_arr(b, size);

    return 0;
}

void display_arr(int ar[], int size)//print array
{
	for (int i = 0; i < size; i++)
		cout << ar[i] << " ";

}

void num_back(int a[], int start, int size)//reverse an array
{
	if (start >= size)//meet in the middle of the array 
		return;//when the start = the end, program stop

	int temp = a[start];
	a[start] = a[size];
	a[size] = temp;
	
	num_back(a, start + 1, size - 1);//call recursive
}