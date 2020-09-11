// ConsoleApplication55.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>

using namespace std;

class CheckBook
{
	double accountmoney;
public:
	void Open(double bal)//float numbers
	{
		accountmoney = bal;
	}
	void Write(double withdraw)//decreas balance
	{
		if (accountmoney >= withdraw)
			accountmoney -= withdraw;
		else
			cout << "you dont have enough in your account" << endl;
	}
	void Deposit(double deposit)//increase balance
	{
		accountmoney += deposit;
	}
	double Balance() //show balance
	{
		return accountmoney;
	}
	//no private
};


CheckBook personal;

int main()
{
	double a;
	cout << "How many do you have in your account?  " << endl;
	cin >> a;
	personal.Open(a);
	cout << "How many do you want to take? " << endl;
	cin >> a;
	personal.Write(a);
	cout << "How many do you want to save? " << endl;
	cin >> a;
	personal.Deposit(a);
	cout << "Remain balance in account: " << personal.Balance();
	cout << endl;

}