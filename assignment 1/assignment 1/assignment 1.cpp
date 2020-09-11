// assignment 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;
 
void convert(string str, int &num, int index=0)
{
	str.erase(std::remove(str.begin(), str.end(), ','), str.end());//earse all the comma

	if (index == str.size())
		return;
	num *= 10;
	num += str[index] - '0';//convertion
	return convert(str, num, index + 1);
}

int main()
{
	int num = 0;
	string s;
	cout << " Enter a sting num: ";
	cin >> s;
	convert(s,num);
	cout <<"convertered num =  "<< num;
	system("pause");
	return 0;
}
