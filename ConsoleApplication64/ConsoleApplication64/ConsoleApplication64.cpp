// ConsoleApplication64.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{ 
	int sum=0;
	for (int i = 0; i < 9; i++)
	{
		sum = sum + i;
	}
	cout << sum << endl;
    return 0;
}
