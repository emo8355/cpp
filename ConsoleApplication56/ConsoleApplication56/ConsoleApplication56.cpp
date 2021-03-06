// ConsoleApplication56.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

typedef  char  String20[21];
typedef  char  String2[3];

struct  nameType
{
	String20  first;
	String20  last;
};

struct  placeType
{
	String20  city;
	String2  state;
	string  zipCode;
};
struct  personType
{
	nameType  name;
	placeType  place;
};

void ask();
void display();
personType  customer;



int main()
{
	display();
	return 0;
}

void ask()
{
	cout << "What is your name?(First Name)" << endl;
	cin >> customer.name.first >> customer.name.last;
	cout << "Where are you from?(City State)" << endl;
	cin >> customer.place.city >> customer.place.state;
	cout << "What is the zipcode? " << endl;
	cin >> customer.place.zipCode;
}


void display()
{
	ask();
	cout << "============================================================================" << endl;
	cout << "Displaying information: " << endl;
	cout << "First name: " << customer.name.first << endl;
	cout << "Last name: " << customer.name.last << endl;
	cout << "City: " << customer.place.city << endl;
	cout << "State: " << customer.place.state << endl;
	cout << "Zipcode: " << customer.place.zipCode << endl;
}