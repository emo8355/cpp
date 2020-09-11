// ConsoleApplication60.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;


int main() 
{
	int num = 0;
	int x;
	int i=0;
	int total=0;
	ifstream numbers;

	numbers.open("numbers.txt");
	if (!numbers) 
	{
		cout << "OPEN FAILURE" << endl;
		exit(1);//end the program with error
	}
	cout << "NUM: ";
	while (numbers >> x)
	{
		cout << x << "  ";
		total = total + x;
		x = i;
		i++;
	}
	cout << endl << "Numbers of int: " << i << endl;
	cout << "total: " << total << endl;
	int average = total / i;
	cout << "average: " << average << endl;
	numbers.close();
	return 0;
}