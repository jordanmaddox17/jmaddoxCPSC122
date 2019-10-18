/*
Class: CPSC 122-01
Jordan Maddox
GU Username: jmaddox
Submitted By: Jordan Maddox
GU Username: jmaddox
File Name: project6.h
Practice with Linked Lists: Finding the length, adding a new item, reading in from an item, deleting a node at head and within the list, printing contents of each node, and finding the contents of an item in node at a position in the list. 
To Build: g++ project6Tst.cpp project6.cpp
To Execute: ./a.out
*/

#include <iostream>
using namespace std;

#include "project6.h"

//Constructor
List::List()
{
	length = 0;
	head = NULL;
}

//Destructor
List::~List()
{
	while (length > 0){
		cout << "delete" << endl;
		DeleteItemH();
	}
}

/*
pre: an instance of lists exists
post: returns true if list is empty, false otherwise
*/
bool List::IsEmpty() const
{
	int len = 0;
	len = GetLength();
	
	if (len == 0)
		return true;
	else
		return false;
}

/*
pre: an instance of list exists
post: returns length of the list 
*/
int List::GetLength() const
{	
	
	int count = 0;
	
	node* temp = head;
	while (temp != NULL){
		temp = temp->next;
		count++;
	}	
 	return count;
}

 /*
pre: an instance of list exists
post: newItem is at the head of the list 
*/
void List::PutItemH(const itemType newItem)
{
	node* temp = new node;
	temp->item = newItem;
	temp->next = head;
	head = temp;
	length++;
	temp = NULL;
}

 /*
pre: an instance of list exists and is not empty
post: Returns the contents of the head of the list. 
*/
itemType List::GetItemH() const
{
	itemType get;

	node* temp = head;
	get = temp->item;
	
	return get;
}

/*
pre: an instance of list exists and is not empty
post: head of the list is deleted 
*/
void List::DeleteItemH()
{
	node* temp;
	temp = head->next;
	delete head;
	head = temp;
	length--;
	temp = NULL; 
}

/*
pre: an instance of list exists and is not empty
post: contents of list nodes are displayed on subsequent lines 
*/	
void List::Print() const
{
	node* temp = head;
	while (temp != NULL){
		cout << temp->item << endl;
		temp = temp->next;
	}
}

/*
pre:  an instance of list exists and is not empty
post: returns the position of item if item is in the list, -1 
      otherwise. The position of the head of the list is 0. 
*/
int List::Find(const itemType match) const
{
	int count = 0;
	
	node* temp = head;
	while (temp->item != match && temp != NULL){ 
		count++;
		temp = temp-> next;
	}
	
	if(temp->item == match)
		return count;
	else
		return -1;
}

/*
pre:  an instance of List exists and contains n items.
      pos is in the range [0..n-1]. If a list contained a single item,
	  pos could only be 0. Notice you've alread written a function
      to handle the situation where n = 1;
post: deletes item at postion, pos. 
*/
void List::DeleteItem(const int pos)
{
	int n = 0;
	
	if (pos == 0){ 
		DeleteItemH();
		return;
	}
		
	node* temp = head;	
	while(n < pos-1){
		temp = temp->next;
		n++;
	}
	//connects node at position n with the conents of last->next pointer. Then, deletes last (pos)
	node* last = temp->next;
	temp->next = last->next;
	cout << temp->item << endl;
	delete last;
	length--;			
	temp = NULL;
	last = NULL;
}



