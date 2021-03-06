// ConsoleApplication25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double root(double a, int n, double x0, double epsilon)
{
	if (a < 0)
		return -1;
	else if (n == 0)
		return -1;
	int xk1 = x0 - ((pow(x0, n) - a) / (n *(pow(x0, n - 1))));
	int i = 0;
	do
	{
		x0 = xk1;
		xk1 = x0 - ((pow(x0, n) - a) / (n *(pow(x0, n - 1))));
		i++;
	} while (abs((x0 - xk1)) >= epsilon);

	return xk1;


}


int main()
{
	double a = 100;
	int n = 2;
	double x0 = 0.1;
	double epsilon = 0.0001;
	double r = root(a, n, x0, epsilon);
	cout << r << endl;

	return 0;
}


