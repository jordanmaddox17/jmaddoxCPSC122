/*
Class: CPSC122-01
Name: Jordan Maddox
Submitted By: Jordan Maddox
GU username: jmaddox
File Name: project5.cpp
Program: this program manipulates a file test contents using a class structure
To Build: g++ project5Tst.cpp project5.cpp
To Execute: ./a.out "this is" "project 5"
*/

#include<iostream> 
using namespace std;

#include "project5.h"

MyString::MyString(char const* strIn){
	//determine the length of MyString instance
	int length = MyStrlen(StrIn);
			
	//dynamically allocate memory for MyString instance
	str = new char[length +1];
	
	//copy contents of strIn to MyString instance
	MyStrcpy(StrIn);
	
}

//Destructor function
MyString::~MyString(){
	delete [] str;
}

//Displays string contents
void MyString::myDisplay(){
	int length = MyStrlen(StrIn);
	for (int i = 0; i < length; i++)
		cout << str[i];
	cout << endl;
}

//copies a string
void MyString::myStrcpy(char const* strIn){
	int i = 0;
	while(i < length){
		str[i] = strIn[i];
		i++;
	}
	str[i] = '\0';
	
}

//finds length
int MyString::myStrlen(){
	length = 0;
	while(strIn[length] != '\0')
			length++;
	
	length = length - 1;
			
	return length;
}

//finds if two strings are the same
bool MyString::isEqual(char const* strIn){
	if (MyString == *strIn){
		cout << "equal" << endl;
		return true;
	}
	
	else{ 
		cout << "not equal" << endl;
		return false;
	}
	
}

//finds position of a character
int MyString::find(char const* strIn){
	
	int postion;
	
	for (int i = 0; strIn[i] != '\0'; i++){
		for (int j = 0; MyString[j] != strIn[i]; j++)
	
	
	return j;
			
}

//combines two strings
void MyString::concat(){
	
	for(int i = 0; MyString != '\0'; i++)
	
	for(int j = 0; strIn != '\0'; j++){
		MyString[i] = strIn[j];
		i++;
	}
	
	i++;
	MyString[i] = '\0';
	
}

