// ConsoleApplication70.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"iostream"
#include"emoployee.cpp"
#include<string>
using namespace std;

emoployee st;

int main()
{
	string name;
	int num;
	cout << "name: ";
	cin >> name;
	cout << "ID: ";
	cin >> num;
	st.get_name(name, num);
	return 0;
}

