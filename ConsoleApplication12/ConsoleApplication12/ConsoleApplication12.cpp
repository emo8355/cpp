// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int x;
	int count = 0;
	int choice;
	double sum = 0;
	double average;
	do
	{
		cout << "\n Enter a grade <Enter>: ";
		cin >> x;
		sum = sum + x;
		count++;
		cout << "Do you wish to enter another grade? (1 for yes and 0 or other key for no): "
			<< endl;
		cin >> choice;
	} while (choice == 1);
	if (count == 0)
		cout << "You haven't entered any number, no average will be computed, bye \n";
	else {
		average = sum / count;
		cout << "The average of these " << count << " grades is " << average << endl;
	}
	return 0;
}

