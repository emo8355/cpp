// ConsoleApplication76.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// define each Node in Chain

template<class ItemType>

struct Node {

	ItemType info;

	Node* next;

};

template<class ItemType>

class Chain {

private:

	Node<ItemType> *start;

public:

	Chain()

	{

		start = NULL;

	}

	// finding its length

	int getLength()

	{

		Node<ItemType> *temp = start;

		int length = 0;

		while (temp != NULL)

		{

			length++;

			temp = temp->next;

		}

		return length;

	}

	// appending one Node to the end of the Chain

	void append(ItemType item)

	{

		Node<ItemType> *newNode = new Node<ItemType>;

		newNode->info = item;

		newNode->next = NULL;

		if (start == NULL)

		{

			start = newNode;

		}
		else {

			Node<ItemType> *temp = start;

			while (temp->next != NULL)

			{

				temp = temp->next;

			}

			temp->next = newNode;

		}

	}

	// testing whether a given Node is included in the Chain (search a node)

	bool contains(ItemType item)

	{

		Node<ItemType> *temp = start;

		while (temp != NULL)

		{

			if (temp->info == item)

				return true;

			temp = temp->next;

		}

		return false;

	}

	// removing a node from the end of the Chain

	ItemType remove()

	{

		if (start == NULL)

			return NULL;

		if (start->next == NULL)

		{

			ItemType item = start->info;

			Node<ItemType> *temp = start;

			delete(temp);

			start = NULL;

			return item;

		}

		Node<ItemType> *temp = start->next;

		Node<ItemType> *preTemp = start;

		while (temp->next != NULL)

		{

			preTemp = temp;

			temp = temp->next;

		}

		ItemType item = temp->info;

		preTemp->next = NULL;

		delete(temp);

		return item;

	}

	// printing the Chain

	void printChain()

	{

		if (start == NULL)

			return;

		Node<ItemType> *temp = start;

		while (temp != NULL)

		{

			cout << temp->info << "\t";

			temp = temp->next;

		}

	}

};

int main() {

	Chain<int> chain;

	for (int i = 0; i<5; i++)

		chain.append(i);

	cout << "\n Chain length : " << chain.getLength();

	chain.printChain();

	cout << "\n 5 present in chain " << chain.contains(5);

	cout << "\n 2 present in chain " << chain.contains(2);

	for (int i = 0; i<5; i++)

		cout << "\n Item-" << (i + 1) << " removed " << chain.remove();

	cout << "\n Chain length : " << chain.getLength();

	chain.printChain();

	return 0;

}