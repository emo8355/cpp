// ConsoleApplication30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void Change(int a[], int size)
{
	for (int i = 0; i < size; i++) {
		if (a[i] % 7 == 0)
		{
			a[i] = a[i] / 7;
		}
		else {
			a[i] = a[i] / 5;
		}
	}
}


int main()
{
    return 0;
}

