// c++ lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"iostream"
#include"emoployee.h"
#include<string>
using namespace std;

int main()
{
	int num;
	cout << "How many workers: ";
	cin >> num;
	emoployee a[999];
	for (int i = 0; i < num; i++)
	{
		a[i].get_name();
		a[i].get_income();
		cout << "=========================================" << endl;
	}
	cout << "====finish input=====" << endl;
	cout << "Display here: " << endl;
	for (int i = 0; i < num; i++)
		a[i].display();

	return 0;
}

