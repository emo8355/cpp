// ConsoleApplication36.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void DisplayBoard(char array[][3], int size);

void GrabInput(char player);

void UpdateBoard(char array[][3], int size, char player, char currentMove);
//int PrintBoard(char array[][3], int size, char currentMove);

char board[3][3] = { { '1','2','3' },{ '4','5','6' },{ '7','8','9' } };

char player1 = 'X', player2 = 'O'; //Initialized variables
char currentMove = '0'; //Place to store current move inputted by user 1-9
char currentPlayer = player1; //Current player initialized as player1 with either X or O

int main()
{
	//char* cMove = &currentMove;
	//*cMove = currentMove;

	DisplayBoard(board, 3);

	for (int move = 0; move < 9; ++move)
	{

		GrabInput(currentPlayer);
		UpdateBoard(board, 3, currentPlayer, currentMove);
		cout << "Current Player: " /*<< cout */ << currentPlayer << endl;
		cout << "Current Move: " << cout << currentMove << endl;
		//cout<<"Current Move: " /*<< cout*/ <<*cMove<<endl;
		//system("pause");
		DisplayBoard(board, 3);

		//Switch current player for next move
		if (currentPlayer == player1) currentPlayer = player2;
		else currentPlayer = player1;
	}
	//system("pause");
	return 0;
}

void DisplayBoard(char array[][3], int size)
{
	//system("cls");
	cout << "::Tic Tac Toe::\n\n";

	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			cout << array[x][y];
			cout << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void GrabInput(char player)
{
	//char* cMove = &currentMove;

	cout << "\n";
	cout << "Your move:\n\n";
	cout << "Player " << player << " (1-9): ";
	cin >> currentMove; //Store move of designated player into currentMove

						//cMove = currentMove;
}

void UpdateBoard(char array[][3], int /*size*/, char player, char currentMove)
{
	//char* cMove = &currentMove;


	switch (currentMove)
	{
	case '1': array[0][0] = player; break;
	case '2': array[0][1] = player; break;
	case '3': array[0][2] = player; break;
	case '4': array[1][0] = player; break;
	case '5': array[1][1] = player; break;
	case '6': array[1][2] = player; break;
	case '7': array[2][0] = player; break;
	case '8': array[2][1] = player; break;
	case '9': array[2][2] = player; break;
	}
	//*cMove = currentMove;
}