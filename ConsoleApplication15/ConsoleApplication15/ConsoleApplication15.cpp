// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int row, column;
	char symbol;

	cout << "How many row and column do you want?" << endl;
	cin >> row >> column;

	cout << "What symbol do you like?" << endl;
	cin >> symbol;
	cout << "Here is your rectangle: " << endl;

   for (int y = 1; y <= column; y++) {
        for (int x = 1; x <= row; x++) {
            cout << symbol;
        }
        cout << endl;
    }
	return 0;
}

