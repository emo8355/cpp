// ConsoleApplication78.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{

	int n;
	string st;
	cout << "choose what u want to do(x,y,z): ";
	cin >> st;
	if (st == "x")
	{
		int c1;
		int total = 0;
		cout << "how many times do u want: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			total = total + 1;
			c1 = i+1;
		}
		cout << "answer is : " << total << endl;
		cout << "it count: " << c1 << " times" << endl;
	}
	if (st == "y")
	{
		int c1;
		int total = 0;
		cout << "how many times do u want: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			total = total + n;
			c1 = i + 1;
		}
		cout << "answer is : " << total << endl;
		cout << "it count: " << c1 << " times" << endl;
	}
	if (st == "z")
	{
		int c1;
		int total = 1;
		cout << "how many times do u want: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			total = total*n;
			c1 = i + 1;
		}
		cout << "answer is : " << total << endl;
		cout << "it count: " << c1 << " times" << endl;
	}

	system("pause");
    return 0;
}

