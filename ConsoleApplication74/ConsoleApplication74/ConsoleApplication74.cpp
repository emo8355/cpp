// ConsoleApplication74.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool checkBraces(string s) 
{
	stack <char> aStack;
	bool balancedSoFar = true;
	int i = 0;
	while (balancedSoFar < s.length() && i<s.length())
	{
		char ch;
		ch = s[i];
		if (ch == '{')
			aStack.push('{');
		else if (ch == '}')
		{
			if (!aStack.empty())
				aStack.pop();
			else
				balancedSoFar = false;
		}
		i++;
	}
	if (balancedSoFar==0 && aStack.empty())
		cout << "aString has balanced braces";
	else
		cout << "aString has no balance braces";
}

int main()
{
	string a;
	a = "afnaosnfoiaf{}";
	checkBraces(a);
    return 0;
}

