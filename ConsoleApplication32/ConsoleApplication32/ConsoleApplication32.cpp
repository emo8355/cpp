// ConsoleApplication32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct game {
	int number;
	char name[20];
	float points;

};

int bubblesort(game a[], int size)
{
	game temp;
	for (int i = 0; i < size - 1; i++) 
	{
		for (int j = 0; j < size - 1; j++) 
		{
			if (a[j + 1].number < a[j].number) {
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}

	}
	return *a;
}

int main()
{
	game a[3];
	game b[3];
	for (int i = 0; i < 3; i++) {
		cout << "what is your name?\n" << endl;
		cin >> a[i].name;
		cout << "what is your number?\n" << endl;
		cin >> a[i].number;
	}

	b = bubblesort(a, 3);

    return 0;
}

