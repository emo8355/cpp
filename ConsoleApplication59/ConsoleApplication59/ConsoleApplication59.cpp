// ConsoleApplication59.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void reverse(string text);


int main()
{
	string input;
	cout << "Please enter a string to reverse: ";
	cin >> input;
	cout << "\n";
	cout << "Here is the reverse word: ";
	reverse(input);
	cout << "\n";
	return 0;
}

void reverse(string text)
{
	if (text.size() == 1)
		cout << text << endl;
	else
	{
		cout << text[text.size() - 1];
		reverse(text.substr(0, text.size() - 1));
	}
}