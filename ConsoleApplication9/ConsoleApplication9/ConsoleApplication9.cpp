// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int x;
	cout << "What is the value for x? \n";
	cin >> x;
	cout << "Processing: \n";
	while (x>0)
	{
		cout << x << endl;
		x = x - 3;
	}
	
    return 0;
}

