// ConsoleApplication77.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <string>
#include <iostream>
#include <time.h>
using namespace std;

void display(int a[],int size)
{
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
}
int main()
{
	int size;
	srand(time(NULL));
	cout << "What isthe size for array: ";
	cin >> size;
	int*a = new int[size];
	for (int i = 0; i < size; i++)
		a[i] = rand()%100 + 1;
	cout << "unsorted: ";
	display(a, size);
	cout << endl;
	cout << "sorted: ";
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (a[j] < a[i])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	display(a, size);
	system("pause");
    return 0;
}

