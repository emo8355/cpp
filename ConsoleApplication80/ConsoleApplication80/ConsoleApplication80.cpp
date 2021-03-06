// ConsoleApplication80.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctime>
#include <time.h>
#include <iostream>
using namespace std;

void display(int a[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
}


int main()
{
	clock_t start = clock();
	int size;
	int c1 = 0, c2 = 0;
	srand(time(NULL));
	size = rand() % 10 + 1;
	cout << "size of the array : " << size << endl;
	int*a = new int[size];
	for (int i = 0; i < size; i++)
		a[i] = rand() % 999 + 1;
	cout << "unsorted: ";
	display(a, size);
	cout << endl;
	cout << "sorted: ";
	for (int i = 1; i<size; i++)
	{
		int temp = a[i];
		int j = i - 1;
		while ((temp<a[j]) && (j >= 0))
		{
			a[j + 1] = a[j];
			j = j - 1;
			c1 ++;
		}
		c2 = i + c1;
		a[j + 1] = temp;
	}
	display(a, size);
	cout << endl;
	clock_t finish = clock();
	double overallTime = static_cast<double>(finish - start) / (CLOCKS_PER_SEC);
	cout << "Numbers of compairsions : " << c2 << endl;
	cout << "Numbers of shifts : " << c1 << endl;
	cout << "over all time = " << overallTime <<" sec "<< endl;
	system("pause");
	return 0;
}

