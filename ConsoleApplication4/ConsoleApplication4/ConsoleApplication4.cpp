// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "enter your score";
	cin >> score;
	if (score >= 100)
		cout << "high \n";
	else
		cout << "low \n ";
    return 0;
}

