// ConsoleApplication33.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include<iostream>
using namespace std;

void intro() 
{
	cout << "Introduction: " <<"\n"<< "This program is to give the options to user"<<"\n"<<"in order to draw a triangle or diamond in c++.\n" << endl;
}


void draw_triangle(int get_size, char get_char)
{
	int space = 1;
	space = get_size - 1;

	for (int i = 1; i<= get_size; i++)
	{
		for (int j = 1; j<= space; j++)
			cout << " ";//each time add a space at the front as the program proceed
		space--;

		for (int j = 1; j <= 2 * i - 1; j++)
			//last line of the triangle
			cout << get_char;//symbol that the user choose to use

		cout << "\n";
	}
}
void draw_diamond(int get_size, char get_char)
{
	int space = 1;
	space = get_size - 1;

	//same function as the triangle but only for the top half
	for (int a = 1; a<= get_size; a++)
	{
		for (int b = 1; b<= space; b++)
			cout << " ";

		space--;// the space will be continously decrease by the for-loop start

		for (int b = 1; b <= 2 * a - 1; b++)
			//this is the equation for last line at the top half of the diamond , for example the size 3, the last line will have 7 symbol
			cout << get_char;//symbol that the user choose to use

		cout << "\n";
	}
	//bottom half of the diamond start here

	space = 1;

	for (int a = 1; a <= get_size - 1; a++)
	{
		for (int b = 1; b<= space; b++)
			cout << " ";

		space++;
		//space at bottom part of the diamond will become smaller when the graph proceed

		for (int b = 1; b <= 2 * (get_size - a) - 1; b++)
			cout << get_char;//symbol that the user choose to use

		cout << "\n";
	}
}

int get_size()//get the size of the graph from user
{
	int a;//get a random variable in order i can return it later

	cout << "What size do you want to draw?\n";

	cin >> a;

	return a;//return the variable can save it in the memory

}
char get_char()//get the symbol that the user want to use for the graph
{
	char a;//get a random variable in order i can return it later

	cout << "Which symbol do you want to draw with?\n";

	cin >> a;

	return a;// retuen the random variable in the memory
}

void draw_shape(int choice)//function that gives the user options
{

	if (choice == 1)
	{
		draw_triangle(get_size(), get_char());
	}
	else if (choice == 2) 
	{
		draw_diamond(get_size(), get_char());
	}
	else if(choice==3)
	{
		cout << "the program end in here." << "\n" << endl;
	}
}

int menu()
// to sum up all the function above
{

	int choice;//call  by value in drawshape(choice)
	cout << "What shape do you want to draw? \n" << "1) a triangle \n" << "2) a diamond \n" << "3) quit \n" << endl;
	cin >> choice;
	//call by value
	draw_shape(choice);
	//call function
	cout << "Here is your graph\n";
	return 0;
}

int main()
//call the function menu() to make it work
{
	intro();
	menu();
	return 0;
}