#include <iostream>
using namespace std;

#include "project7.h"

//Constructor
List1::List1()
{
	length = 0;
	head = NULL;
	tail = NULL;
}

//Destructor
List1::~List1()
{
	while (length > 0)
	{
		DeleteItemH();
	}
}

bool List1::IsEmpty()
{
	int len = 0;
	len = GetLength();
	if (len == 0)
		return true;
	else
		return false;
}

int List1::GetLength()
{
	int count = 0;
	
	node* temp = head;
	while(head != tail)			//check to see if this works
	{
		temp = temp->next;
		count++;
	}
	return count;
}

void List1::PutItemH(const itemType newItem)
{
	node* temp = new node;
	temp->item = newItem;
	temp->next = head;
	head = temp;
	length++;
	temp = NULL;
}

itemType List1::GetItemH() const
{
	node* temp = head;
	return temp->item; 
}

void List1::DeleteItemH()
{
	node* temp;
	temp = head->next;
	delete head;
	head = temp;
	length--;
	temp = NULL;
}

void List1::PutItemT(const itemType newItem)
{
	
}

itemType List1::GetItemT() const
{
}

void List1::DeleteItemT()
{
}

void List1::Print() const
{
	node* temp = head;
	while (temp != NULL)			//would I need another line to print out last node?
	{
		cout << temp->item << endl;
		temp = temp->next;
	}
}

int List1::FindItem(const itemType target) const
{
}

int List1::DeleteItem(const itemType target)
{
}
