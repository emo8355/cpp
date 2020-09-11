// ConsoleApplication53.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct PersonRec
{
	char name[20];
	int age;
	int weight;
	int height;
};
void display(PersonRec student);

int main()
{
	PersonRec student;
	cout << "What's your name?: ";
	cin >> student.name;
	cout << "What is student's age?: ";
	cin >> student.age;
	cout << "What is you weight in pounds?: ";
	cin >> student.weight;
	cout << "What is you height in inches?: ";
	cin >> student.height;
	display(student);
	return 0;
}

void display(PersonRec student)
{
	cout << "\nDisplaying Information: " << endl;
	cout << "Name: " << student.name << endl;
	cout << "Age: " << student.age << endl;
	cout << "Height: " << student.height << " inches" << endl;
	cout << "Weight: " << student.weight << " pounds" << endl;
}