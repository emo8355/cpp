// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void PrintChar(int row = 5, int column = 10, char symbol = "a");

int main()
{
	int rows, columns;
	char symbol;
	cout << "How many rows do you want? \n";
	cin >> rows; 
		cout << "How many columns? \n";
	cin >> columns;
	cout << "With what symbol? \n";

		PrintChar(rows, columns, symbol);

	return 0;

	void PrintChar(int row, int column, char symbol);
	{
		for (int y = 1; y <= columns; y++)
		{
			for (int x = 1; x <= rows; x++);
		}
		cout << symbol;
	}
}

void PrintChar(int row, int column, char symbol)
{
}
