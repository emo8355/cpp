// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int temperture=0, pressure=0;
	cout << "What is the temperture now ? \n";
	cin >> temperture;
	cout << "What is the pressure? \n";
	cin >> pressure;

	if (temperture >= 100||pressure>=200)
		cout << "warning\n";
	else
		cout << "ok\n";
    return 0;
}

