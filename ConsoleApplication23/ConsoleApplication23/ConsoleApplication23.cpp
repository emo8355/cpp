// ConsoleApplication23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;



double root(double a, int n, double x0, double epsilon) //a=number that you want to get the root, n=nth root, x0=intial number, epsilon=range
{
	cout << "Name: " << "Homer li\n" << "\n" << "login name: " << "802342\n" << "\n" << "assignment numbe: " << "2\n" << "\n" << "date: " << "Feb 4th,2018" << endl;
	cout << "\n";
	cout << "Short decription: " << "The manin purpose of this function is to covert Newton-Raphson approximation into C++ form\n" << endl;

	cout << "solution:  ";

	if (n == 0)
		return -1;
	else if (a <= 0)
		return -1;

	double xp1 = x0 - ((pow(x0, n) - a) / (n * pow(x0, n - 1)));//us xp1 insted of x0+1 because if anything wrong happen, i can just fix this line insted
																// pow(x0,n) = x0^n

	//cout << x0 << ", " << xp1 << endl; //to check wether the initial x0 and x0+1 has change or not (del the "//" if want to check)
	while (abs((x0 - xp1)) >= epsilon)
	{
		//cout << abs((x0 - xp1)) << ", epsilon = " << epsilon << endl;//check the abslute value and the initial value of epsilon (del the "//" if want to check)
		//if i is greater than 50 it will get solution -1 instead of do the calculation

		x0 = xp1;
		xp1 = x0 - ((pow(x0, n) - a) / (n * pow(x0, n - 1)));
		//cout << x0 << ", " << xp1 << endl;// to check wether the initial x0 and x0+1 has change or not after the calculation (del the "//" if want to check)

	}
	return xp1;


}

int main()//only for testing
{
	double number = 3;
	int nthr = 2;
	double xx = 9;
	double epsilon = 0.0001;
	double r = root(number, nthr, xx, epsilon);

	cout << r << endl;

	return 0;
}
