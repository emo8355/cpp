// ConsoleApplication41.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n[200];
	for (int i = 0; i < 100; ++i) {
		n[i] = rand() % 100 + 1;
		cout << n[i]<<" ";
	}
    return 0;
}

