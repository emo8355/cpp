// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int countdown;
	cout << "How many time you want to countdown?\n";
	cin >> countdown;
	while (countdown > 0)
	{
		cout << "hello ";
		countdown -= 1;
	}
	cout << "\n";
    return 0;
}

