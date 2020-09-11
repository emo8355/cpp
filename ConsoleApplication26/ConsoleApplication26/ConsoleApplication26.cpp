// ConsoleApplication26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void intro() {
	cout << "Introduction: " << " This program is to give the options to user to draw a triangle or diamond in c++." << endl;
}


void draw_triangle(int get_size, char get_char)
{
	int c, k, space = 1;
	space = get_size - 1;

	for (k = 1; k <= get_size; k++)
	{
		for (c = 1; c <= space; c++)
			cout << " ";

		space--;

		for (c = 1; c <= 2 * k - 1; c++)
			cout << get_char;

		cout << "\n";
	}
}
void draw_diamond(int get_size, char get_char)
{
	int c, k, space = 1;
	space = get_size - 1;

	for (k = 1; k <= get_size; k++)
	{
		for (c = 1; c <= space; c++)
			cout << " ";

		space--;

		for (c = 1; c <= 2 * k - 1; c++)
			cout << get_char;

		cout << "\n";
	}
	space = 1;

	for (k = 1; k <= get_size - 1; k++)
	{
		for (c = 1; c <= space; c++)
			cout << " ";

		space++;

		for (c = 1; c <= 2 * (get_size - k) - 1; c++)
			cout << get_char;

		cout << "\n";
	}
}

int get_size() {
	int a;

	cout << "What size do you want to draw?\n";

	cin >> a;

	return a;

}
char get_char() {
	char a;

	cout << "Which symbol do you want to draw with?\n";

	cin >> a;

	return a;
}

void draw_shape(int choice)
{
	int size;//reference by value
	char symbol;//reference by value

	size = get_size();//reference by value

	symbol = get_char();//reference by value


	if (choice == 1)
		draw_triangle(size, symbol);

	else if (choice == 2)
		draw_diamond(size, symbol);

	else if (choice == 3)

		exit(0);
	else
		cout << "Can only enter 1~3" << endl;
}



int main()//main function which give options to user
{
	int choice;
	cout << "What shape do you want to drwa? \n" << "1) a triangle \n" << "2) a diamond \n" << "3) quit \n" << endl;
	cin >> choice;
	draw_shape(choice);
	cout << "Here is your graph\n";
	return 0;
}

