// ConsoleApplication27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double CHANGE(int a[], int size) {

	for (int i = 0; i < size; i++) {
		cin>>a[i];
			if (a[i] % 7 == 0) {
				a[i] = a[i] / 7;
			}
			else {
				a[i] = a[i] * 5;
			}
	}

}

int main()
{
	int size;
	int a[20];

	cout << "what is the size you want?" << endl;
	cin >> size;


    return 0;
}

