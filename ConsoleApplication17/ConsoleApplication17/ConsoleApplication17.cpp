// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int rect(int x, int y)
{
	int area = x * y;

	return area;
}

int main()
{
	int x, y;
	cout << "waht is the lenth of rect ?";
	cin >> x;
	cout << "waht is the weight ?";
	cin >> y;
	
	int area = x * y;

	cout << "Your rect's area is: " << area << endl;

    return 0;
}

