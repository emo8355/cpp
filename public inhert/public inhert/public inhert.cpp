// public inhert.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "relation.h"
#include<iostream>
#include <string>
using namespace std;


int main()
{
	student a;
	a.name = "Homer";
	a.num = 12;
	a.citizenship = "China";

	cout << "This student is call: " << a.name << endl;
	cout << "His student number is: " << a.num << endl;
	cout << "He is from: " << a.citizenship << endl;
	system("pause");
	return 0;
}

