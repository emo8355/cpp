// ConsoleApplication61.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void display() ;

int main()
{
	cout<<sizeof(int)<<endl
	<<sizeof(double)<<endl
	<<sizeof(long);
	//display();
    return 0;
}

void display()
{
	int num;
	float input, sum = 0, avg;

	cout << "How many numbers" << endl;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		cout << "NUM" << i+1<<endl;
		cin >> input;
		sum += input;
	}

	avg = sum / num;
	cout << "average = " << avg << endl;

}