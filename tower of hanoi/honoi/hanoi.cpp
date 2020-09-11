// honoi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void tower(int layer, char a, char b, char c);

int main()
{
	int num;
	cout << "Enter the number of disks: ";
	cin >> num;
	tower(num, 'A', 'B', 'C');
    return 0;
}

void tower(int layer, char a, char b, char c) 
{
	if (layer == 1)
	{
		cout << "Move " << layer << " from " << a << " to " << c << endl;
		return;
	}
	else
	{
		tower(layer - 1, a, c, b);
		cout << "Mover " << layer << " from " << a << " to " << c << endl;
		tower(layer - 1, b, a, c);
	}
}
