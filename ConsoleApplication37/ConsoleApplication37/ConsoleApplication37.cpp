// ConsoleApplication37.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class TicTacToe
{
private:
	char table[3][3];
public:
	TicTacToe() { }
	//insert numbers
	void setTable()
	{
		int n = 1;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				table[i][j] = '0' + n;//cast n to char
				n++;
			}
		}
	}
	//output table to screen
	void printTable()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				if (j < 2) { cout << table[i][j] << "|"; }
				else { cout << table[i][j] << endl; }
				if (i < 2) { cout << "-+-+-\n"; }
		}
	}
	//player move and set to X or O
	void playerMove(char num, char player)
	{
		bool wrongMove = true;//wrong move
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{//mark square with X or O
				if (table[i][j] == num) { table[i][j] = player; wrongMove = false; }
			}
		}
		if (wrongMove == true) { cout << "Wrong move!\n"; }
	}
	//cheking for winers
	bool checkWinner(char player, bool gameOver)
	{
		//winning conditions
		for (int i = 0; i < 3; i++)//checking rows
			if (table[i][0] == table[i][1] && table[i][1] == table[i][2]) gameOver = true;
		for (int i = 0; i < 3; i++)//checking columns
			if (table[0][i] == table[1][i] && table[1][i] == table[2][i]) gameOver = true;
		//diagonals
		if (table[0][0] == table[1][1] && table[1][1] == table[2][2]) gameOver = true;
		if (table[0][2] == table[1][1] && table[1][1] == table[2][0]) gameOver = true;
		if (gameOver == true)
		{
			cout << "Player " << player << " wins!\n\n";
		}
		return gameOver;
	}
	//checking for a draw
	bool checkDraw(bool gameOver)
	{
		int n = 1, count = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				//cheking if board is full
				if (table[i][j] == '0' + n) { count++; }
				n++;
			}
		}
		if (count < 1) { cout << "It's a draw!\n\n"; gameOver = true; }
		return gameOver;
	}
};

int main()
{
	bool done = false, gameOver = false;
	char player = 'O', num;
	TicTacToe myGame;
	myGame.setTable();
	do
	{
		if (player == 'X') { player = 'O'; }
		else { player = 'X'; }
		myGame.printTable();
		cout << "Player \"" << player << "\" turn or (q) to quit> ";
		cin >> num;
		cout << "\n";
		if (num == 'q') { cout << "Goodbye!...\n"; break; }
		myGame.playerMove(num, player);
		gameOver = myGame.checkWinner(player, gameOver);
		gameOver = myGame.checkDraw(gameOver);
		//if game over, starting over
		if (gameOver == true)
		{
			myGame.setTable();
			gameOver = false;
		}
	} while (!done);

	system("pause");
	return 0;
}