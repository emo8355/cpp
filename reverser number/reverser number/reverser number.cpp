// reverser number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void reverse_num(int a);

int main()
{
	int num;
	cout << "Enter a number to reverse: ";
	cin >> num;
	reverse_num(num);//call function
    return 0;
}

void reverse_num(int a)
{
	if (a <= 9)
		cout << a;
	else
	{
		cout << a % 10;//get the remainder
		reverse_num(a / 10);//decrease in one unit, ex:598/10=59
		//recursion function call
	}

}

