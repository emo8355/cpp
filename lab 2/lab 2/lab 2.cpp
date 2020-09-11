// lab 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Header.h"
using namespace std;

int main()
{
	srand(time(NULL));
	BinarySearchTree b;
	int ch, tmp, tmp1, old, New,t;
	while (1)
	{
		cout << endl << endl;
		cout << " Binary Search Tree Operations " << endl;
		cout << " ----------------------------- " << endl;
		cout << " 1. Insert Number" << endl;
		cout << " 2. Print Trees " << endl;
		cout << " 3. Removal an Node " << endl;
		cout << " 4. replace an Node" << endl;
		cout << " 5. Exit " << endl;
		cout << " Enter your choice : ";
		cin >> ch;
		cout << " ----------------------------- " << endl;
		switch (ch)
		{
		case 1: 
			cout << "How many number you want to insert: ";
			cin >> t;
			for (int i = 0; i <= t; i++)
			{
				tmp = rand() % 20+1;
				b.insert(tmp);
			}
			break;

		case 2: 
			cout << " -------------------" << endl;
			cout << endl;
			cout << " print inorder:";
			b.print_inorder();
			cout << endl;
			cout << " print preorder:";
			b.print_preorder();
			cout << endl;
			cout << " print postorder:";
			b.print_postorder();
			cout << endl << endl;
			cout << " -------------------" << endl;
			break;

		case 3: cout << " Enter data to be deleted : ";
			cin >> tmp1;
			b.remove(tmp1);
			break;

		case 4:
			cout << " Enter a old number that you want to replace: ";
			cin >> old;
			cout << "You want to replace it to: ";
			cin >> New;
			b.replace(old, New);
			break;

		case 5: system("pause");

			return 0;
			break;
		}
	}
}