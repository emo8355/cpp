// ConsoleApplication38.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


char platform[3][3] = { 'v','v','v','v','v','v','v','v','v'};

void Platform() //the purpose of this function is to draw the chart
{
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3;j++) 
		{
			cout << platform[i][j] << " ";
		}
		cout << endl;
	}

}

char userinput = 'x';

void input()
{
	int choice;
	cout << "choose the place you want to take";
	cin >> choice;
	if (choice == 1)
		platform[0][0] = userinput;
	else if (choice == 2)
		platform[0][1] = userinput;
	else if (choice == 3)
		platform[0][2] = userinput;
	else if (choice == 4)
		platform[1][0] = userinput;
	else if (choice == 5)
		platform[1][1] = userinput;
	else if (choice == 6)
		platform[1][2] = userinput;
	else if (choice == 7)
		platform[2][0] = userinput;
	else if (choice == 8)
		platform[2][1] = userinput;
	else if (choice == 9)
		platform[2][2] = userinput;
}





int main()
{
	Platform();
	system("break");
    return 0;
}

