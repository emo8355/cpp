// ConsoleApplication71.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

void writebackword(string s)
{
	int length = s.size();
	if (length > 0)
	{
		cout << s.substr(length - 1, 1);
		writebackword(s.substr(0, length - 1));
	}
}


int main()
{
	string sentence;
	cin >> sentence;
	writebackword(sentence);
	cout << endl;
    return 0;
}

