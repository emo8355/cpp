// ConsoleApplication62.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "time.h"
#include <cstdlib>
using namespace std;

int main()
{
	int i;
	srand(time(NULL));
	i = rand() % 10 + 1;
	cout << i << endl;
    return 0;
}

