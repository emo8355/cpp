// ConsoleApplication57.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

enum dicePattern
{
	Fish=1,
	Shrimp,
	Crab,
	Chicken,
	Golden_coin,
	Magic_barrel
};

int bet = 0;
int money = 0;
string choice1, choice2;
int dice;
int prize = 0;
int games = 0;
int cash;
int win = 0;
int play = 0;
int ap = 0;

class Die
{
public:
	void roll()
	{
		//solution will be different each time
		dice = rand() % 6 + 1;
		srand((unsigned)time(NULL));
		if (dice == 1) { pattern = Fish; }
		if (dice == 2) { pattern = Shrimp; }
		if (dice == 3) { pattern = Crab; }
		if (dice == 4) { pattern = Chicken; }
		if (dice == 5) { pattern = Golden_coin; }
		if (dice == 6) { pattern = Magic_barrel; }
	}
	void print()
	{
		if (pattern == 1) cout << "Fish";
		else if (pattern == 2) cout << "Shrimp";
		else if (pattern == 3) cout << "Crab";
		else if (pattern == 4) cout << "Chicken";
		else if (pattern == 5) cout << "Golden_coin";
		else if (pattern == 6) cout << "Magic_barrel";
		else
			cout << "<No solution>";
	}
	string get()
	{
		if (pattern == 1) return "Fish";
		else if (pattern == 2) return "Shrimp";
		else if (pattern == 3) return "Crab";
		else if (pattern == 4) return "Chicken";
		else if (pattern == 5) return "Golden_coin";
		else if (pattern == 6) return "Magic_barrel";
		else
			return "<No solution>";
	}
private:
	dicePattern pattern;
};

Die a;
Die b;
dicePattern pattern;
string face;
void rule();
void choice();
void display();

int main()
{
	cout << "enter your money" << endl;
	cin >> cash;
	while (ap == 0)
	{
		cout << "  Game of dice:  <Fish  Shrimp  Crab>\n"
			<< " **************************************\n"
			<< "0.	Help  (display rules for this game)\n"
			<< "1.	Enter the total amount of money you bring in the casino for gambling\n"
			<< "2.	Roll the dice and then place your bet here \n"
			<< "        (Max. is $5000, Min. is $10)\n"
			<< "3.	Open the container that holds the dice\n"
			<< "4.	Display your gambling results:\n"
			<< "         •	current cash on hand\n"
			<< "         •	number of winnings\n"
			<< "         •	total number of plays so far\n"
			<< "9.	Quit\n";
		rule();
		choice();
		display();
		a.get();
		b.get();

		if (choice1 == a.get())
		{
			cash += bet*4;

			win++;
			play++;
		}
		else if (choice1 == a.get())
		{
			cash += bet*4;

			win++;
			play++;
		}
		else
		{
			cash-=bet;

			play++;
		}
		cout << endl;
		cout << "cash on hand:" << cash << endl;
		cout << "number of wins:" << win << endl;
		cout << "total number of play:" << play << endl;
		cout << endl;
	}
	cout << endl;





	return 0;
}
void rule()
{
	cout << "Rlues: " << endl;
	cout << "1.Initial cash for this game is specified by player." << endl;
	cout << "2.Maximum bet for each game is  $5000." << endl;
	cout << "3.Minimum bet for each game is  $10." << endl;
	cout << "4.Two dice are used per game" << endl;
	cout << "5.Player can place his or her bet on anyone of those six face-patterns of the dice for each game." << endl;
	cout << "6.The winning prize is based on how many matched dice have been found:" << endl;
	cout << "If one matched die has been found, then the prize is  2x.\n"
		<< "If two matched dice have been found, then the prize is  4x.\n"
		<< "If no matched die has been found, then the player loses his or her bet for this game - session." << endl;
	cout << "========================================================================================================================";
}



void choice()
{
	cout << "Fish = 1" << endl;
	cout << "Shrimp = 2" << endl;
	cout << "Crab = 3" << endl;
	cout << "Chicken = 4" << endl;
	cout << "Golden_coin = 5" << endl;
	cout << "Magic_barrel = 6" << endl;
	cout << "enter your choice1:\n";
	cin >> choice1;
	cout << "enter your choice2:\n";
	cin >> choice2;
	cout << "enter your bet(min 10 max 500):\n";
	cin >> bet;
	if (bet < 10 || bet >500)
	{
		cout << "error\n";
	}
	a.roll();
	b.roll();
}


void display()
{
	cout << "Dice a is : ";
	a.print();
	cout << endl;
	cout << "Dice b is : ";
	b.print();
}

