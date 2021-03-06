// ConsoleApplication81.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctime>
#include <time.h>
#include <iostream>
using namespace std;

int long sw = 0, com = 0;

void mergeSort(int a[], int f, int l,int size);
void merge(int a[], int first, int mid, int last,int size);

void display(int a[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
}

int main()
{
	clock_t start = clock();
	int size;
	srand(time(NULL));
	size = rand() % 10+1;
	cout << "size of the array : " << size << endl;
	int*a = new int[size];//array a
	int index1=0, index2=0;
	for (int i = 0; i < size; i++)
		a[i] = rand() % 999 + 1;
	cout << "unsorted list a: ";
	display(a, size);
	cout << endl;
	cout << "sorted: ";
	mergeSort(a, 0, size-1,size);

	display(a, size);
	com = size * (size - 1) / 2;
	cout << endl;
	clock_t finish = clock();
	double overallTime = static_cast<double>(finish - start) / (CLOCKS_PER_SEC);
	cout << "Numbers of compairsions : " << com << endl;
	cout << "Numbers of swap : " << sw << endl;
	cout << "over all time = " << overallTime << " sec " << endl;
	system("pause");
	return 0;
}

void mergeSort(int a[], int first, int last, int size) 
{
	if (first < last) 
	{
		int mid = (first + last) / 2;
		mergeSort(a, first, mid,size);
		mergeSort(a, mid + 1, last, size);
		merge(a, first, mid, last, size);
	}
}

void merge(int a[], int first, int mid, int last, int size)
{
	int *temarr = new int[size];
	int first1 = first;
	int last1 = mid;
	int first2 = mid + 1;
	int last2 = last;

	int index = first1;
	while ((first1 <= last1) && (first2 <= last2)) 
	{
		if (a[first1] <= a[first2])
		{
			temarr[index] = a[first1];
			first1++;
		}
		else
		{
			temarr[index] = a[first2];
			first2++;
		}
		index++;
		sw++;
	}
	while (first1 <= last1) 
	{
		temarr[index] = a[first1];
		first1++;
		index++;
		sw++;
	}
	while (first2 <= last2)
	{
		temarr[index] = a[first2];
		first2++;
		index++;
		sw++;
	}

	for (index = first; index <= last; index++) 
	{
		a[index] = temarr[index];
	}
}