// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
#include<iostream>
	using namespace std;

	void PrintChar(int row = 5, int column = 10, char symbol = "*");

	int main()
	{
		int rows, columns;
		cout << "How many rows do you want? \n";
		cin >> rows; 2
			cout << "How many columns? \n";
		cin >> columns;
		cout << "With what symbol? \n"

			PrintChar(rows, columns, symbol);

		return 0;

		void PrintChar(int row, int column, char symbol)
		{
			for (int y = 1; y <= column; y++)
			{
				for (int x = 1; x <= row; x++)
			}
			cout << symbol;
		}
	}


    return 0;
}

