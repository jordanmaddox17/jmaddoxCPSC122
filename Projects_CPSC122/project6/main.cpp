#include <iostream>
using namespace std;

#include "project6.h"


int main()
{
	//test variables
	bool empty;


 //Use of a static list 
 List lst;
 
 //IsEmpty Test- static
 empty = lst.IsEmpty();
 if (empty == true)
 	cout << "lst: empty" << endl;
 else
 	cout << "lst: not empty" << endl;
 
 for (int i = 0; i < 5; i++)
   lst.PutItemH(i);
 lst.Print();	//use . to implemnet functions for static lists

 //Use of a dynamic list
 List* lst1 = new List;
 
 //IsEmpty Test- dynamic
 empty = lst1->IsEmpty();
 if (empty == true)
 	cout << "lst1: empty" << endl;
 else
 	cout << "lst1: not empty" << endl;
 
 for (int i = 0; i < 5; i++)
  lst1->PutItemH(10*i);		//use -> to implement functions for dynamically allocated lists
 lst1->Print();
 
 //test IsEmpty
 //static
  empty = lst.IsEmpty();
 if (empty == true)
 	cout << "lst: empty" << endl;
 else
 	cout << "lst: not empty" << endl;
 
 //dynamic
  empty = lst1->IsEmpty();
 if (empty == true)
 	cout << "lst1: empty" << endl;
 else
 	cout << "lst1: not empty" << endl;
 
 
 //test GetLength
 int lstlen;
 int lst1len;
 
 lstlen = lst.GetLength();
 lst1len = lst1->GetLength();
 
 cout << "lst len: " << lstlen << endl;
 cout << "lst1 len: " << lst1len << endl;
 
 lst.Print();
 lst1->Print();
 
 //test GetItemH
 itemType lstGet, lst1Get;
 
 lstGet = lst.GetItemH();
 lst1Get = lst1->GetItemH();
 
 cout << "lst item H: " << lstGet << endl;
 cout << "lst1 item H: " << lst1Get << endl;
 
 //test DeleteItemH
 lst.DeleteItemH();
 lst1->DeleteItemH();
 
 lst.Print();
 lst1->Print();
 
 lstlen = lst.GetLength();
 lst1len = lst1->GetLength();
 
 cout << "lst len: " << lstlen << endl;
 cout << "lst1 len: " << lst1len << endl;
 
 //test Find ---------------------------------------- need to fix!!
 int lstFind;
 int lstTst;
 int lst1Find;
 int lst1Tst;
 
 lstFind = lst.Find(2);
 lstTst = lst.Find(6);
 lst1Find = lst1->Find(10);
 lst1Tst = lst1->Find(50);
 
 cout << "lst Find (correct): " << lstFind << endl;
 cout << "lst Test (incorrect): " << lstTst << endl;
 cout << "lst1 Find (correct): " << lst1Find << endl;
 cout << "lst1 Test (incorrect): " << lst1Tst << endl;
 
 //Test DeleteItem
 
 


 delete lst1; //necessary to invoke destructor on dynamic list
 return 0;
}
