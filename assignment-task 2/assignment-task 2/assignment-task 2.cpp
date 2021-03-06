// assignment-task 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int getMax(string str_ar[], int n)//find maxium digit of string 
{

	int max = str_ar[0].size();

	for (int i = 1; i < n; i++) //n is size of array
	{
		if (str_ar[i].size()>max)
			max =str_ar[i].size();
	}

	return max;

}

void count_String_Sort(string a1[], int size, int k1)
{

	string *b1;
	int *c1;
	int move;

	b1 = new string[size];
	c1 = new int[999];

	for (int i = 0; i <999; i++)
		c1[i] = 0;

	for (int j = 0; j < size; j++) 
	{
		c1[k1 < a1[j].size()?(int)a1[j][k1] + 1 : 0]++;
	}

	for (int f = 1; f <999; f++)
		c1[f] += c1[f - 1];

	for (int r = size - 1; r >= 0; r--) 
	{
		b1[c1[k1 < a1[r].size() ? (int)a1[r][k1] + 1 : 0] - 1] = a1[r];
		c1[k1 < a1[r].size() ? (int)a1[r][k1] + 1 : 0]--;
	}

	for (int l = 0; l < size; l++)
		a1[l] = b1[l];
}

void radixStringSort(string str_arr[], int r)
{

	int maxdigit = getMax(str_arr, r);//max digit

	for (int i = maxdigit; i > 0; i--) 
	{
		count_String_Sort(str_arr, r, i - 1);
	}

}

int main(void)
{

	string a[] = { "acanj","wqs","ertyu","kjhbv","bhu","losd","qasdx","ihvbjb","mnbvcx","cfghbvg","knkjvg","dqd","zsdf","bghbvghyuibvgh"};
	cout << endl;
	cout << "Original array: " << endl;
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
		cout << a[i] << " ";

	cout << endl;

	radixStringSort(a, (int)(sizeof(a) / sizeof(a[0])));

	cout << endl << "Sorted:" << endl;

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)//print sorted array
	{

		cout << a[i].c_str() << " ";

	}
	cout << endl;
	cout << endl;
	cout << "Big-O = "<< (int)(sizeof(a) / sizeof(a[0]))*getMax(a, (int)(sizeof(a) / sizeof(a[0])));
	cout << endl;
	system("pause");
	return 0;
}