// ConsoleApplication52.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int numDoubles;
double *doublesArray;
double sum = 0;
void ask();
void cal();
int main()
{
	cal();
	return 0;

}
void ask() 
{
	cout << "How many float number to calculate?: \n";
	cin >> numDoubles;
	doublesArray = new double[numDoubles];
	cout << "Enter " << numDoubles << " float number: " << endl;
}
void cal() 
{
	ask();
	int i = 0;
	while (i<numDoubles)
	{
		cin >> *(doublesArray + i);
		i++;
	}
	for (i = 0; i<numDoubles; i++)
	{
		sum += *(doublesArray + i);
	}
	double aver = (double)(sum / numDoubles);
	cout << "Average =" << aver << endl;
}