// ConsoleApplication66.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<ctime>
#include <iostream>
using namespace std;

//double max;
//void printgrade(double x, double y);
//char letter();

//int max(int num1,int num2);
//double max(double num1, double num2);
//double max(double num1, double num2,double num3);
int main()
{
	int size;
	cout << "inout size: ";
	cin >> size;
	int *a = new int[size];
	int *c = new int[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		a[i] = rand() % 100 + 1;
	cout << "array a: ";
	for (int b = 0; b < size; b++)
		cout << a[b] << " ";
	cout << endl;
	cout << "array c: ";
	for (int y = 0; y < size; y++)
	{
		c[y] = a[y];
		cout << c[y]<<" ";
	}
	int temp1;
	cout << endl << "array s: ";
	for (int i = 1; i < size; i++)
	{
		temp1 = a[i - 1];
		a[i - 1] = a[i];
		a[i] = temp1;
	}
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	int temp;
	cout << endl;
	cout << "array r: ";
	for (int j = 0; j < size / 2; j++) 
	{
		temp = a[j];
		a[j] = a[size-j - 1];
		a[size-j - 1] = temp;
	}
	for (int j = 0; j < size; j++)
	{
		cout << a[j] << " ";
	}
	int sum = 0;
	cout << endl << "sum array: ";
	for (int i = 0; i < size; i++)
	{
		sum = sum + a[i];
	}
	cout << sum << endl;
	int max;
	max = a[0];
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i]>=max)
		{
			max = a[i];
			count=i;
		}
	}
	cout << "index: " << count << endl;
	cout << "max: " << max << endl;
	int min;
	for (int i = 0; i < size; i++) 
	{
		min = a[0];
		if (a[0] > a[i])
		{
			a[0] = a[i];
			min = a[0];
		}
	}
	cout << "min: " << min<<endl;
	return 0;
}

/*int max(int num1,int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

double max(double num1, double num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
	
}

double max(double num1, double num2,double num3)
{

	cout << max(num1, num2) << endl;//compare num 1 and num 2 in this function
	if (num1 > num2&&num1>num3)
		return num1;
	else if (num2 > num1&&num2>num3)
		return num2;
	else if (num3 > num1&&num3>num2)
		return num3;
	else
	{
		cout << "number not exist or did not enter any number" << endl;
		return 0;
	}
}*/







/*void printgrade(double x,double y)
{
	if (x > y)
	{
		max = x;
		cout << "max grade is max " << x << endl;
	}
	else
	{
		max = y;
		cout << "max grade is max " << y << endl;
	}

}

char letter() 
{
	char b;
	if (max >= 90)
		b = 'a';
	else if (max >= 80)
		b = 'c';
	else
		cout << "YOU GOT A C" << endl;
	return b;

}*/