// ssaaaaaaaaaaaa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//distance between 2 points


int main()
{
	double x1, x2, y1, y2, d;
	cout << "input x1 y1(x1,y1): ";
	cin >> x1 >> y1;
	cout << "input x2 y2(x2,y2): ";
	cin >> x2 >> y2;
	d = sqrt(abs(pow(x2-x1, 2)+pow(y2-y1, 2)));
	cout << "Distance: " << d << endl;
	return 0;
}